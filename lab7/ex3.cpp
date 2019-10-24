#include <iostream>
#include <cstring>

using namespace std;

int Fill_array(double arr [], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> arr[i];
    }
    return size;
}

void Show_array(double *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double *arr, int size) {
    if (size <= 1) {
        return ;
    }
    double tmp;
    tmp = *arr;
    *arr = *(arr + size - 1);
    *(arr + size - 1) = tmp;
    Reverse_array(arr + 1, size - 2);
}

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    double arr[size];
    Fill_array(arr, size);
    cout << "The output is as follows: " << endl;
    Show_array(arr, size);
    double arr_tmp[size];
    for (int i = 0; i < size; i++) arr_tmp[i] = arr[i];
    int size_tmp = size;
    Reverse_array(arr, size);
    Show_array(arr, size);
    Reverse_array(arr_tmp + 1, size_tmp - 2);
    Show_array(arr_tmp, size_tmp);
    return 0;
}
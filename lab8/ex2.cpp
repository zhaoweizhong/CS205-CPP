#include <iostream>

template <typename T>
T Max5(T arr[]) {
    T result = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] >= result) {
            result = arr[i];
        }
    }
    return result;
}

int main() {
    int arr1[5] = {1, 2, 3, 4 ,5};
    std::cout << "Max int = " << Max5<int>(arr1) << std::endl;
    double arr2[5] = {1.1, 2.0, 3.0, 4.0, 5.5};
    std::cout << "Max double = " << Max5<double>(arr2) << std::endl;
}
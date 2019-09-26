#include <iostream>

int main() {
    int arr[5];
    int *ptr;
    ptr = arr;
    std::cout << "Input: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> *(ptr + i);
    }
    std::cout << "Output: " << std::endl;
    for (int i = 4; i >= 0; i--) {
        std::cout << *(ptr + i) << std::endl;
    }
    return 0;
}
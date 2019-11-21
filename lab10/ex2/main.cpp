#include <iostream>
#include "candybar.hpp"

int main() {
    std::cout << "Please enter the number of candybar:" << std::endl;
    int num;
    std::cin >> num;
    std::cin.clear();
    CandyBar *arr = new CandyBar[num];
    for (int i = 0; i < num; i++) {
        std::cout << "CandyBar[" << i << "]" << std::endl;
        setCandyBar(arr[i]);
    }
    for (int i = 0; i < num; i++) {
        showCandyBar(arr[i]);
    }
    return 0;
}
#include <iostream>

int main() {
    int sum = 0;
    while (true) {
        std::cout << "Enter integer number: ";
        int input;
        std::cin >> input;
        if (input == 0) {
            std::cout << "The cumulative sum of the entries to date is: " << sum << std::endl;
            return 0;
        }
        sum += input;
        std::cout << "The cumulative sum of the entries to date is: " << sum << std::endl;
    }
}
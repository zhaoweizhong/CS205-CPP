#include <iostream>
#include <cstring>

int main() {
    std::cout << "Enter words (to stop, type the word done): " << std::endl;
    int sum = 0;
    while (true) {
        char input[20];
        std::cin >> input;
        if (!strcmp(input, "done")) {
            std::cout << "You entered a total of " << sum << " words." << std::endl;
            return 0;
        }
        ++sum;
    }
}
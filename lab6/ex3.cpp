#include <iostream>

int main() {
    float quiz;
    float mid;
    float final;
    std::cin >> quiz;
    std::cin >> mid;
    std::cin >> final;
    float avg = (quiz + mid + final) / 3;
    if (avg >= 90 || int(avg) == 90) {
        std::cout << "A" << std::endl;
        return 0;
    } else if (avg >= 70 || int(avg) == 70) {
        std::cout << "B" << std::endl;
        return 0;
    } else if (avg >= 50 || int(avg) == 50) {
        std::cout << "C" << std::endl;
        return 0;
    } else {
        std::cout << "F" << std::endl;
        return 0;
    }
}
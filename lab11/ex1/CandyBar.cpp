#include "CandyBar.hpp"

void CandyBar::setCandyBar() {
    std::cout << "Enter brand name of a candy bar: ";
    getline(std::cin, name);
    std::cout << "Enter weight of the candy bar: ";
    std::cin >> weight;
    std::cout << "Enter calories (an integer value) in the candy bar: ";
    std::cin >> calories;
}

void CandyBar::showCandyBar() {
    std::cout << "Brand: " << name << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Calories: " << calories << std::endl;
}
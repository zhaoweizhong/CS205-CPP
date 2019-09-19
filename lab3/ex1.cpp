#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight;
    int calories;
};

int main() {
    CandyBar cb;
    std::cout << "Enter brand name of a candy bar: ";
    getline(std::cin, cb.name);
    std::cout << "Enter weight of the candy bar: ";
    std::cin >> cb.weight;
    std::cout << "Enter calories (an integer value) in the candy bar: ";
    std::cin >> cb.calories;
    std::cout << "Brand: " << cb.name;
    std::cout << std::endl << "Weight: " << cb.weight;
    std::cout << std::endl << "Calories: " << cb.calories;
}
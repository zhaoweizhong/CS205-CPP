#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight;
    int calories;
};

int main() {
    CandyBar *ptr = new CandyBar;
    std::cout << "Enter brand name of a candy bar: ";
    getline(std::cin, ptr->name);
    std::cout << "Enter weight of the candy bar: ";
    std::cin >> ptr->weight;
    std::cout << "Enter calories (an integer value) in the candy bar: ";
    std::cin >> ptr->calories;
    std::cout << "Brand: " << ptr->name;
    std::cout << std::endl << "Weight: " << ptr->weight;
    std::cout << std::endl << "Calories: " << ptr->calories;
}
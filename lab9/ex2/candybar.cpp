#include "candybar.hpp"
#include <string>

int setCandyBar(CandyBar & snack) {
    std::cin.clear();
    std::cin.ignore();
    std::cout << "Enter brand name of a candybar: ";
    std::string brand;
    getline(std::cin, brand);
    if (brand == "") {
        std::cout << "Empty name detected!!";
        exit(-1);
    }
    std::cout << "Enter weight of the candybar: ";
    double weight;
    std::cin >> weight;
    std::cin.clear();
    std::cout << "Enter calories of the candybar: ";
    int calories;
    std::cin >> calories;
    std::cin.clear();
    snack.brand = brand;
    snack.weight = weight;
    snack.calorie = calories;
    return 0;
}
void showCandyBar(const CandyBar & snack) {
    std::cout << "Brand: " << snack.brand << std::endl;
    std::cout << "Weight: " << snack.weight << std::endl;
    std::cout << "Calories: " << snack.calorie << std::endl;
}
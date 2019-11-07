#include <iostream>

struct CandyBar {
    std::string brand;
    double weight;
    int calories;
};

void set(CandyBar &cb) {
    std::cin.clear();
    std::cin.sync();
    std::cout << "Enter brand name of a candy bar: ";
    getline(std::cin, cb.brand);
    std::cout << "Enter weight of the candy bar: ";
    std::cin >> cb.weight;
    std::cout << "Enter calories (an integer value) in the candy bar: ";
    std::cin >> cb.calories;
}

void set(CandyBar* const cb) {
    std::cin.clear();
    std::cin.sync();
    std::cout << "Enter brand name of a candy bar: ";
    getline(std::cin, cb->brand);
    std::cout << "Enter weight of the candy bar: ";
    std::cin >> cb->weight;
    std::cout << "Enter calories (an integer value) in the candy bar: ";
    std::cin >> cb->calories;
}

void show(const CandyBar &cb) {
    std::cout << "Brand: " << cb.brand << std::endl;
    std::cout << "Weight: " << cb.weight << std::endl;
    std::cout << "Calories: " << cb.calories << std::endl;
}

void show(const CandyBar* cb) {
    std::cout << "Brand: " << cb->brand << std::endl;
    std::cout << "Weight: " << cb->weight << std::endl;
    std::cout << "Calories: " << cb->calories << std::endl;
}

int main() {
    CandyBar *cb = new CandyBar;
    set(cb);
    show(cb);
    CandyBar cb2;
    set(cb2);
    show(cb2);
}
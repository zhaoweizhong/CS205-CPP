#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight;
    int calories;
};

int main() {
    CandyBar cb[3];
    for (size_t i = 0; i < 3; i++) {
        cb[i].name = "Mocha Munch";
        cb[i].weight = 2.3;
        cb[i].calories = 350;
        std::cout << "Brand: " << cb[i].name << std::endl;
        std::cout << "Weight: " << cb[i].weight << std::endl;
        std::cout << "Calories: " << cb[i].calories << std::endl;
    }
    return 0;
}
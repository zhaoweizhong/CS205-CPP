#include <iostream>
#include <string>

struct Pizza {
    std::string name;
    float diameter;
    float weight;
};

int main() {
    Pizza *ptr = new Pizza;
    std::cout << "Enter the company name: ";
    getline(std::cin, ptr->name);
    std::cout << "Enter the diameter: ";
    std::cin >> ptr->diameter;
    std::cout << "Enter the weight: ";
    std::cin >> ptr->weight;
    std::cout << "Company name: " << ptr->name;
    std::cout << std::endl << "Diameter: " << ptr->diameter;
    std::cout << std::endl << "Weight: " << ptr->weight;
    return 0;
}
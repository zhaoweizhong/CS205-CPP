#include <iostream>
#include "Rectangle.hpp"

int main() {
    std::cout << "Rectangle 1" << std::endl;
    std::cout << "---------------" << std::endl;
    Rectangle rect1 = Rectangle(4, 40);
    rect1.display();
    std::cout << std::endl;
    std::cout << "Rectangle 2" << std::endl;
    std::cout << "---------------" << std::endl;
    Rectangle rect2 = Rectangle(3.5, 35.9);
    rect2.display();
}
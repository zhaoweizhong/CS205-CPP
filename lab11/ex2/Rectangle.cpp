#include "Rectangle.hpp"

Rectangle::Rectangle() {
    width = 1.0;
    height = 1.0;
}

Rectangle::Rectangle(double width, double height) {
    this->width = width;
    this->height = height;
}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return 2 * (width + height);
}

void Rectangle::display() {
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << std::endl;
}
#include <iostream>
#include <string>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() {
        width = 1.0;
        height = 1.0;
    }

    Rectangle(double width, double height) {
        this->width = width;
        this->height = height;
    }

    double getArea() {
        return width * height;
    }

    double getPerimeter() {
        return 2 * (width + height);
    }

    void display() {
        std::cout << "Width: " << width << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Area: " << getArea() << std::endl;
        std::cout << "Perimeter: " << getPerimeter() << std::endl;
    }
};

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
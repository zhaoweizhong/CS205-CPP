#ifndef RECTANGLE
#define RECTANGLE

#include <string>
#include <iostream>

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double width, double height);
    double getArea();
    double getPerimeter();
    void display();
};

#endif //RECTANGLE
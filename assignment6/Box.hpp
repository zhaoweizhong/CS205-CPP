#ifndef BOX_HPP
#define BOX_HPP
#include <iostream>

class Box {
public:
    Box();
    Box(int length, int breadth, int height);
    Box(const Box& b);
    int getLength();
    int getBreadth();
    int getHeight();
    long long CalculateVolume();
    bool operator<(const Box other) const;
    friend std::ostream & operator<<(std::ostream& os, const Box& box);
private:
    int length;
    int breadth;
    int height;
};

Box::Box() : length(0), breadth(0), height(0) {}

Box::Box(int length, int breadth, int height) : length(length), breadth(breadth), height(height) {}

Box::Box(const Box& b) : length(b.length), breadth(b.breadth), height(b.height) {}

int Box::getLength() {
    return this->length;
}

int Box::getBreadth() {
    return this->breadth;
}

int Box::getHeight() {
    return this->height;
}

long long Box::CalculateVolume() {
    return this->length * this->breadth * this->height;
}

bool Box::operator<(const Box other) const {
    if (this->height < other.height && this->breadth == other.breadth && this->length == other.length) {
        return true;
    } else if (this->breadth < other.breadth && this->length == other.length) {
        return true;
    } else if (this->length < other.length) {
        return true;
    } else {
        return false;
    }
}

std::ostream & operator<<(std::ostream& os, const Box& box) {
    return std::cout << box.length << " " << box.breadth << " " << box.height << std::endl;
}

#endif // BOX_HPP
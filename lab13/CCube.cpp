#include "CCube.hpp"
#include <iostream>

using namespace std;

CCube::CCube() : length(1.0), width(1.0), height(1.0) {}

CCube::CCube(float length, float width, float height) : length(length), width(width), height(height) {}

CCube::CCube(CCube* ccube) : length(ccube->length), width(ccube->width), height(ccube->height) {}

float CCube::GetArea() {
    return 2 * length * width + 2 * length * height + 2 * width * height;
}

float CCube::GetVolume() {
    return length * width * height;
}

void CCube::Show() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Surface Area: " << GetArea() << endl;
    cout << "Volume: " << GetVolume() << endl;
}
#include "CSphere.hpp"
#include <iostream>

using namespace std;

CSphere::CSphere() : radius(1.0) {}

CSphere::CSphere(float radius) : radius(radius) {}

CSphere::CSphere(CSphere* csphere) : radius(csphere->radius) {}

float CSphere::GetArea() {
    return 4 * 3.14 * radius * radius;
}

float CSphere::GetVolume() {
    return 4.0 / 3.0 * 3.14 * radius * radius * radius;
}

void CSphere::Show() {
    cout << "Radius: " << radius << endl;
    cout << "Surface Area: " << GetArea() << endl;
    cout << "Volume: " << GetVolume() << endl;
}
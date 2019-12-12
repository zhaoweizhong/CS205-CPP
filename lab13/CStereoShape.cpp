#include "CStereoShape.hpp"
#include <iostream>

using namespace std;

int CStereoShape::numberOfObject = 0;

float CStereoShape::GetArea() {
    cout << "CStereoShape :: GetArea()" << endl;
    return 0.0;
}

float CStereoShape::GetVolume() {
    cout << "CStereoShape :: GetVolume()" << endl;
    return 0.0;
}

void CStereoShape::Show() {
    cout << "CStereoShape :: Show()" << endl;
}
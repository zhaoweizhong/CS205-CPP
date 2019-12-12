#include <iostream>
#include "CStereoShape.hpp"
#include "CCube.hpp"
#include "CSphere.hpp"

using namespace std;

int main() {
    CCube a_cube = CCube(4.0, 5.0, 6.0);
    CSphere c_sphere = CSphere(7.9);
    CStereoShape *p;
    p = &a_cube;
    p->Show();
    p = &c_sphere;
    p->Show();
    CStereoShape::GetNumOfObject();
    return 0;
}
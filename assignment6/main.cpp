#include "Box.hpp"
#include <iostream>

using namespace std;

int main() {
    Box box1 = Box(1,2,3);
    Box box2 = Box(2,2,4);
    Box box3 = Box(1,2,7);
    bool comp1 = box1 < box2;
    bool comp2 = box1 < box3;
    bool comp3 = box2 < box3;
    cout << box1 << box2 << box3;
    cout << comp1 << " " << comp2 << " " << comp3 << endl;
    cout << box1.CalculateVolume() << endl;
    return 0;
}
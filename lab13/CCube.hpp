#ifndef CCUBE_HPP
#define CCUBE_HPP
#include "CStereoShape.hpp"

class CCube : public CStereoShape {
public:
    CCube();
    CCube(float length, float width, float height);
    CCube(CCube* ccube);
    float GetArea();
    float GetVolume();
    void Show();
private:
    float length;
    float width;
    float height;
};

#endif // CCUBE_HPP
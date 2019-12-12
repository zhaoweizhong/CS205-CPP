#ifndef CSPHERE_HPP
#define CSPHERE_HPP
#include "CStereoShape.hpp"

class CSphere : public CStereoShape {
public:
    CSphere();
    CSphere(float radius);
    CSphere(CSphere* csphere);
    float GetArea();
    float GetVolume();
    void Show();
private:
    float radius;
};

#endif // CSPHERE_HPP
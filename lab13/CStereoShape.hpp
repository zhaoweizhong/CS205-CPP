#ifndef CSTEREOSHAPE_HPP
#define CSTEREOSHAPE_HPP

class CStereoShape {
private:
    static int numberOfObject;
public:
    CStereoShape() {
        numberOfObject++;
    }
    virtual float GetArea();
    virtual float GetVolume();
    virtual void Show();
    static int GetNumOfObject() {
        return numberOfObject;
    }
};

#endif // CSTEREOSHAPE_HPP
#ifndef CANDYBAR
#define CANDYBAR

#include <string>
#include <iostream>

class CandyBar {
private:
    std::string name;
    float weight;
    int calories;
public:
    void setCandyBar();
    void showCandyBar();
};

#endif //CANDYBAR
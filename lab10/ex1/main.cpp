#include <iostream>
#include "fun.hpp"

int main() {
    double target_1[5];
    double source_1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    CopyArray(target_1, source_1);
    double target_2[5];
    double source_2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int len = 5;
    CopyArray(target_2, source_2, len);
    double target_3[5];
    double source_3[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    CopyArray(target_3, source_3, source_3 + 5);
    PrintArray(target_1, target_2, target_3, len);
}
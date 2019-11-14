#include <iostream>

// copy with reference notation
void CopyArray(double(&target)[5], double (&source)[5]) {
    for (int i = 0; i < 5; i++) {
        target[i] = source[i];
    }
}

// copy with pointer notation
void CopyArray(double *target, double *source, int len) {
    for (int i = 0; i < len; i++) {
        *(target + i) = *(source + i);
    }
}

// copy with two pointers
void CopyArray(double *target, double *source_start, double *source_end) {
    int len = source_end - source_start + 1;
    for (int i = 0; i < len; i++) {
        *(target + i) = *(source_start + i);
    }
}

//Print the values of three arrays in format
void PrintArray(double *target1, double *target2, double *target3, int len) {
    std::cout.precision(3);
    std::cout << " target1|          target2|          target3" << std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << "    " << *(target1 + i) <<  "|               " << *(target2 + i) << "|              " << *(target3 + i) << std::endl;
    }
}
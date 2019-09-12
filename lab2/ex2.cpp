#include <iostream>
#include <cmath>

int main() {
    printf("Range of char = %d to %d\n", (int)pow(-2, 7), (int)pow(2, 7) - 1);
    printf("Range of unsigned char = %d to %d\n", 0, (int)pow(2, 8) - 1);
    printf("Range of short = %d to %d\n", (int)pow(-2, 15), (int)pow(2, 15) - 1);
    printf("Range of unsigned short = %d to %d\n", 0, (int)pow(2, 16) - 1);
    printf("Range of int = %d to %d\n", (int)pow(-2, 31), (int)pow(2, 31) - 1);
    printf("Range of unsigned int = %d to %d\n", 0, (int)pow(2, 32) - 1);
    printf("Range of long = %ld to %ld\n", (long)pow(-2, 31), (long)pow(2, 31) - 1);
    printf("Range of unsigned long = %d to %lu\n", 0, (unsigned long)pow(2, 32) - 1);
    printf("Range of long long = %lld to %lld\n", (long long)pow(-2, 63), (long long)pow(2, 63) - 1);
    printf("Range of unsigned long long = %d to %llu\n", 0, (unsigned long long)pow(2, 64) - 1);
}
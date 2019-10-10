#include <iostream>

int fibo(int n);

int main() {
    std::cout << "Enter a positive number: ";
    int max;
    std::cin >> max;

    std::cout << "Fibonacci Series (while): ";
    int n = 0;
    while (fibo(n) <= max) {
        std::cout << fibo(n) << " ";
        ++n;
    }
    
    std::cout << std::endl << "Fibonacci Series (for): ";
    for (int i = 0; fibo(i) <= max; i++) {
        std::cout << fibo(i) << " ";
    }
    
    std::cout << std::endl << "Fibonacci Series (do...while): ";
    int p = 0;
    do {
        std::cout << fibo(p) << " ";
        ++p;
    } while (fibo(p) <= max);
    
    return 0;
}

int fibo(int n) {
    switch (n) {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        default:
            return fibo(n - 1) + fibo(n - 2);
    }
}
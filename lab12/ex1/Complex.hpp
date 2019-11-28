#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>
class Complex {
public:
    Complex();
    Complex(double re, double im);
    double getImag() const;
    double getReal() const;
    void Show() const;
    friend Complex operator+(double r, const Complex &other);
    Complex operator+(const Complex &other) const;
    Complex operator+(double real) const;
    Complex operator~() const;
    Complex operator-(const Complex &other) const;
    Complex operator*(const Complex &other) const;
    friend Complex operator*(double r, const Complex &other);
    bool operator==(const Complex &other) const;
    bool operator!=(const Complex &other) const;
    friend std::istream & operator>>(std::istream& is, Complex& other);
    friend std::ostream & operator<<(std::ostream& os, const Complex& other);
private:
    double imag;
    double real;
};

#endif //COMPLEX_HPP
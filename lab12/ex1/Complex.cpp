// Complex.cpp -- implementing Complex methods
#include <iostream>
#include "Complex.hpp"

Complex operator+(double r, const Complex &other) {
    double result_real = r + other.real;
    double result_imaginary = other.imag;
    return Complex(result_real, result_imaginary);
}

Complex::Complex() : real(0), imag(0) {}

Complex::Complex(double re, double im) : real(re), imag(im) {}

Complex Complex::operator+(const Complex &other) const {
    double result_real = real + other.real;
    double result_imaginary = imag + other.imag;
    return Complex(result_real, result_imaginary);
}

Complex Complex::operator+(double real) const {
    double result_real = real + this->real;
    double result_imaginary = imag;
    return Complex(result_real, result_imaginary);
}

Complex Complex::operator~() const {
    return Complex(this->real, this->imag * -1);
}

Complex Complex::operator-(const Complex &other) const {
    double result_real = this->real - other.real;
    double result_imaginary = this->imag - other.imag;
    return Complex(result_real, result_imaginary);
}

Complex Complex::operator*(const Complex &other) const {
    double result_real = this->real * other.real - this->imag * other.imag;
    double result_imaginary = this->imag * other.real + this->real * other.imag;
    return Complex(result_real, result_imaginary);
}

Complex operator*(double r, const Complex &other) {
    double result_real = other.real * r;
    double result_imaginary = other.imag * r;
    return Complex(result_real, result_imaginary);
}

bool Complex::operator==(const Complex &other) const {
    return (this->real == other.real) && (this->imag == other.imag);
}

bool Complex::operator!=(const Complex &other) const {
    return (this->real != other.real) || (this->imag != other.imag);
}

void Complex::Show() const {
    std::cout << real << "+" << imag << "i" << std::endl;
}

double Complex::getImag() const {
    return imag;
}

double Complex::getReal() const {
    return real;
}

std::istream & operator>>(std::istream& is, Complex& other) {
    std::cout << "real: ";
    is >> other.real;
    std::cout << "imaginary: ";
    is >> other.imag;
    return is;
}

std::ostream & operator<<(std::ostream& os, const Complex& other) {
    if (other.getImag() >= 0) {
        os << other.getReal() << "+" << other.getImag() << "i" << std::endl;
    } else {
        os << other.getReal() << "-" << abs(other.getImag()) << "i" << std::endl;
    }
    return os;
}
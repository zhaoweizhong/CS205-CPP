#include <iostream>
#include "Number.hpp"

Number::Number() : num(0) {}

Number::Number(int nu) : num(nu) {}

int Number::getNum() const {
    return this->num;
}

Number Number::operator ++(int) { // Postfix
    int tmp = this->num;
    this->num = this->num + 1;
    return Number(tmp);
}

Number Number::operator ++() { // Prefix
    this->num = this->num + 1;
    return Number(this->num);
}

Number Number::operator --(int) {// Postfix
    int tmp = this->num;
    this->num = this->num - 1;
    return Number(tmp);
}
Number Number::operator --() {// Prefix
    this->num = this->num - 1;
    return Number(this->num);
}

std::ostream & operator<<(std::ostream& os, const Number& num) {
    os << "x = " << num.num;
    return os;
}
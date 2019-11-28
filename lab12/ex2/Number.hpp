#ifndef NUMBER_HPP
#define NUMBER_HPP
#include <iostream>
class Number {
public:
    Number();
    Number(int num);
    int getNum() const;
    Number operator ++(int); // Postfix
    Number operator ++(); // Prefix
    Number operator --(int); // Postfix
    Number operator --(); // Prefix
    friend std::ostream & operator<<(std::ostream& os, const Number& num);
private:
    int num;
};

#endif //NUMBER_HPP
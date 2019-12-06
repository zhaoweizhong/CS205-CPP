#ifndef UTF8_STRING_HPP
#define UTF8_STRING_HPP
#include <iostream>
#include <string>

class UTF8string {
public:
    UTF8string(std::string str); // constructor to build a new object
    UTF8string(char* str); // constructor to build a new object
    int length(); // returns the length IN CHARACTERS of the UTF8string
    int bytes(); // returns the number of bytes used for storing the UTF8string
    int find(std::string substr); // returns the CHARACTER POSITION where substr starts
    void replace(UTF8string to_remove, UTF8string replacement); // replaces to_remove with replacement
    friend std::ostream & operator<<(std::ostream& os, const UTF8string& str); // support std::cout << ustr << std::endl
    UTF8string operator+(const UTF8string &str2) const; // gives regular concatenation (if two objects are called u1 and u2, u1 + u2 changes neither u1 nor u2)
    void operator+=(const UTF8string &str2); // append another string (u1 += u2 changes u1, not u2)
    friend UTF8string operator*(const UTF8string str, const int times); // for repeating a string n times (u * 2)
    friend UTF8string operator*(const int times, const UTF8string str); // for repeating a string n times (2 * u)
    UTF8string operator!() const; // for reversing a string (without modifying original string), which means reversing the characters (not the bytes!), for instance if u is "étudiant" (student in French), !u should be "tnaiduté".
private:
    std::string str;
};

#endif //UTF8_STRING_HPP
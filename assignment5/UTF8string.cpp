#include <iostream>
#include <string>
#include <algorithm>
#include "UTF8string.hpp"
#include "utf8.h"

/* 
 * constructor to build a new object
 */
UTF8string::UTF8string(std::string str) : str(str) {}


/*
 * returns the length IN CHARACTERS of the UTF8string
 */
int UTF8string::length() {
    int length = 0;
    unsigned char *p;
    p = (unsigned char *)(this->str.c_str());
    while (*p) {
        length++;
        int bytes_in_char;
        int codepoint = utf8_to_codepoint(p, &bytes_in_char);
        if (codepoint) {
           _utf8_incr(p);
        } else {
           exit(-1);
        }
    }
    return length;
}

/*
 * returns the number of bytes used for storing the UTF8string
 */
int UTF8string::bytes() {
    return this->str.length();
}

/*
 * returns the CHARACTER POSITION where substr starts
 */
int UTF8string::find(std::string substr) {
    int pos = this->str.find(substr);
    int length = 0;
    unsigned char *p;
    p = (unsigned char *)(this->str.substr(0, pos).c_str());
    while (*p) {
        length++;
        int bytes_in_char;
        int codepoint = utf8_to_codepoint(p, &bytes_in_char);
        if (codepoint) {
           _utf8_incr(p);
        } else {
           exit(-1);
        }
    }
    return length;
}

/*
 * replaces to_remove with replacement
 */
void UTF8string::replace(std::string to_remove, std::string replacement) {
    int position = 0;
    while((position = this->str.find(to_remove, position)) != std::string::npos) {
        int begin = position;
        this->str.replace(begin, to_remove.length(), replacement);
    }
}

/*
 * support std::cout << ustr << std::endl
 */
std::ostream & operator<<(std::ostream& os, const UTF8string& str) {
    os << str.str;
    return os;
}

/*
 * gives regular concatenation (if two objects are called u1 and u2, u1 + u2 changes neither u1 nor u2)
 */
UTF8string UTF8string::operator+(const UTF8string &str2) const {
    return UTF8string(this->str + str2.str);
}

/*
 * append another string (u1 += u2 changes u1, not u2)
 */
void UTF8string::operator+=(const UTF8string &str2) {
    this->str = this->str + str2.str;
}

/*
 * for repeating a string n times (u * 2)
 */
UTF8string operator*(const UTF8string str, const int times) {
    UTF8string new_string = UTF8string("");
    for (int i = 0; i < times; i++) {
        new_string += str;
    }
    return new_string;
}

/*
 * for repeating a string n times (2 * u)
 */
UTF8string operator*(const int times, const UTF8string str) {
    UTF8string new_string = UTF8string("");
    for (int i = 0; i < times; i++) {
        new_string += str;
    }
    return new_string;
}

/*
 * for reversing a string (without modifying original string), which means reversing the characters (not the bytes!), for instance if u is "étudiant" (student in French), !u should be "tnaiduté".
 */
UTF8string UTF8string::operator!() const {
    int arr[str.length()];
    int length = 0;
    unsigned char *p;
    p = (unsigned char *)(str.c_str());
    while (*p) {
        int bytes_in_char;
        int codepoint = utf8_to_codepoint(p, &bytes_in_char);
        if (codepoint) {
            arr[length] = codepoint;
           _utf8_incr(p);
        } else {
           exit(-1);
        }
        length++;
    }
    std::string result  = "";
    for (int i = length - 1; i >= 0; i--) {
        unsigned char *utf8 = (unsigned char *)malloc(sizeof(unsigned char) * 5);;
        result = result + std::string((char*)codepoint_to_utf8(arr[i], utf8));
    }
    return result;
}
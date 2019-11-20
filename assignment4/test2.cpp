#include <iostream>
#include <string>
#include "utf8.h"

int main() {
    std::string in = "钟";
    char* cha = &in[0];
    unsigned char *p;
    p = (unsigned char *)cha;
    int bytes_in_char;
    unsigned int result;
    std::cout << utf8_to_codepoint(p, &bytes_in_char) << std::endl;
}
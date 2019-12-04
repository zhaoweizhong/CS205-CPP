#include <iostream>
#include <string>
#include "utf8.h"

using namespace std;

int main() {
    string str = "Никола́й Васи́льевич Го́голь";
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
    string str2  = "";
    for (int i = length - 1; i >= 0; i--) {
        unsigned char *utf8 = (unsigned char*)malloc(sizeof(unsigned char)*5);;
        str2 = str2 + string((char*)codepoint_to_utf8(arr[i], utf8));
    }

    cout << str2 << endl;
    return 0;
}
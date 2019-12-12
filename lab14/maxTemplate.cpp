/********************************************************
 *
 * FileName: maxTemplate.cpp
 * Purpose: Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T Max(T one, T two) {
    T biggest;
    if (one < two) {
        biggest = two;
    } else {
        biggest = one;
    }
    return biggest;
}

int main() {
    int i_one = 3, i_two = 5;
    cout << "The max of " << i_one << " and " << i_two << " is " << Max<int>(i_one, i_two) << endl;
    float f_one = 5.6, f_two = 7.3;
    cout << "The max of " << f_one << " and " << f_two << " is " << Max<float>(f_one, f_two) << endl;
    string s_one = "donkey", s_two = "apple";
    cout << "The max of " << s_one << " and " << s_two << " is " << Max<string>(s_one, s_two) << endl;
    return 0;
}


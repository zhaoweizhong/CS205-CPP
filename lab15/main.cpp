#include <iostream>
#include <exception>

using namespace std;

struct OutOfRangeException {
    int para_num;
    OutOfRangeException(int para_num) {
        this->para_num = para_num;
    }
};

int main() {
    cout << "Please enter marks for 4 courses: ";
    float marks[4];
    try {
        cin >> marks[0];
        cin >> marks[1];
        cin >> marks[2];
        cin >> marks[3];
        for (int i = 0; i < 4; i++) {
            if (marks[i] > 100 || marks[i] < 0) {
                throw OutOfRangeException(i + 1);
            }
        }
    } catch (OutOfRangeException e) {
        cout << "\033[31m" << "Error: The parameter" << e.para_num << " is " << marks[e.para_num - 1] << " which is out of range(0-100)" << endl;
        return -1;
    }
    cout << "The average of the four courses is " << (marks[0] + marks[1] + marks[2] + marks[3]) / 4 << endl;
    return 0;
}
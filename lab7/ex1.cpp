#include <iostream>

using namespace std;

void displaymenu() {
    cout << "======================================================================" << endl;
    cout << "                                 MENU                                 " << endl;
    cout << "======================================================================" << endl;
    cout << "     1. Add" << endl;
    cout << "     2. Subtract" << endl;
    cout << "     3. Multiply" << endl;
    cout << "     4. Divide" << endl;
    cout << "     5. Modulus" << endl;
}

int Add(int a,int b) {
    return a + b;
}

int Substract(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

float Divide(int a,int b) {
    return (float)a / (float)b;
}

int Modulus(int a, int b) {
    return a % b;
}

int main(int argc, char *argv[]) {
    displaymenu();
    int yourchoice;
    int a;
    int b;
    char confirm;
    do {
        cout << "Enter your choice(1-5):"; 
        cin >> yourchoice; 
        cout << "Enter your two integer numbers:"; 
        cin >> a >> b; 
        switch (yourchoice) { 
            case 1:
                cout << "Result: " << Add(a, b) << endl;
                break;
            case 2:
                cout << "Result: " << Substract(a, b) << endl;
                break;
            case 3:
                cout << "Result: " << Multiply(a, b) << endl;
                break;
            case 4:
                if (b == 0) {
                    cout << "Illegal Input" << endl;
                } else {
                    cout << "Result: " << Divide(a, b) << endl;
                }
                break;
            case 5:
                cout << "Result: " << Modulus(a, b) << endl;
                break;
        } 
        cout << "Press y or Y to continue:"; 
        cin >> confirm; 
    } while (confirm == 'y' || confirm == 'Y'); 
    return EXIT_SUCCESS;
}
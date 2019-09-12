#include <iostream>

int main() {
    long long input;
    std::cout << "Enter the number of seconds: ";
    std::cin >> input;
    long days = input / 86400;
    int hours = (input - days * 86400) / 3600;
    int minutes = (input - days * 86400 - hours * 3600) / 60;
    int seconds = input - days * 86400 - hours * 3600 - minutes * 60;
    std::cout << input << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
    return 0;
}
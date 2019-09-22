#include <iostream>
#include <math.h>
#include <string>
#include <regex>

using namespace std;

struct City {
    string name;
    float latitude;
    float longitude;
};

float calc(City city1, City city2);

int main() {
    regex pattern("^([A-Za-z]+[,]*[\\s]*[,]*[\\s]*)+");
    City city1;
    cout << "The first city: ";
    getline(cin, city1.name);
    if (!regex_match(city1.name, pattern)) {
        cout << "The name of first city is illegal.";
        return 0;
    }
    cout << "The latitude and longitude of first city: ";
    cin >> city1.latitude;
    if (city1.latitude >= 90.01 || city1.latitude <= -90.01) {
        cout << "The latitude of first city is illegal.";
        return 0;
    }
    cin >> city1.longitude;
    if (city1.longitude >= 180.01 || city1.longitude <= -180.01) {
        cout << "The longitude of first city is illegal.";
        return 0;
    }
    if (char buf = getchar() != '\n' && buf != EOF) {
        cout << "The latitude or longitude of first city is illegal.";
        return 0;
    }
    City city2;
    cout << "The second city: ";
    getline(cin, city2.name);
    if (!regex_match(city2.name, pattern)) {
        cout << "The name of second city is illegal.";
        return 0;
    }
    cout << "The latitude and longitude of second city: ";
    cin >> city2.latitude;
    if (city1.latitude >= 90.01 || city1.latitude <= -90.01) {
        cout << "The latitude of second city is illegal.";
        return 0;
    }
    cin >> city2.longitude;
    if (city1.longitude >= 180.01 || city1.longitude <= -180.01) {
        cout << "The longitude of second city is illegal.";
        return 0;
    }
    if (char buf = getchar() != '\n' && buf != EOF) {
        cout << "The latitude or longitude of second city is illegal.";
        return 0;
    }
    cout << "The distance between " << city1.name << " and " << city2.name << " is " << calc(city1, city2) << "km" << endl;
    return 0;
}

float calc(City city1, City city2) {
    float phi1 = 90.0 - city1.latitude;
    float phi2 = 90.0 - city2.latitude;
    float theta1 = city1.longitude;
    float theta2 = city2.longitude;
    float c = sin(phi1) * sin(phi2) * cos(theta1 - theta2) + cos(phi1) * cos(phi2);
    return 6371 * acos(c);
}
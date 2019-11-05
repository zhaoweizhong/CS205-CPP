#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

#define MAX_NAME_LENGTH 35
#define ARRAY_SIZE 1000

struct City {
    std::string name;
    std::string country;
    float latitude;
    float longitude;
};

std::vector<std::string> split(std::string str,std::string pattern);
double get_distance(City city1, City city2);

int main() {
    City data[ARRAY_SIZE];
    // Part 1: Load Data
    std::ifstream infile;
    std::string line;
    infile.exceptions( std::ifstream::failbit | std::ifstream::badbit );
    try {
        infile.open("world_cities.csv");
        int i = 0;
        while (!infile.eof()) {
            getline(infile, line);
            if (i >= ARRAY_SIZE) {
                std::cout << "[Warning] Data is too large and will be truncated." << std::endl;
                break;
            }
            std::vector<std::string> result = split(line, ",");
            data[i] = City {
                result[0],
                result[2],
                stof(result[3]),
                stof(result[4])
            };
            i++;
        }
    }
    catch (const std::ifstream::failure& e) {
        std::cout << "Data file is missing." << std::endl;
        exit(-1);
    }
    // Part 2: Calculate Distance
    while (true) {
        std::cout << "Please enter two city names (\"bye\" to exit)." << std::endl;
        // City #1
        City city1;
        std::cout << "City #1: ";
        std::string city1_input;
        getline(std::cin, city1_input);
        city1_input.erase(0, city1_input.find_first_not_of(" "));
        city1_input.erase(city1_input.find_last_not_of(" ") + 1);
        std::transform(city1_input.begin(), city1_input.end(), city1_input.begin(), ::tolower);
        if (city1_input == "bye") {
            std::cout << "Bye!" << std::endl;
            exit(0);
        }
        int city1_result[ARRAY_SIZE];
        int city1_total = 0;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            std::string city_name = data[i].name;
            std::transform(city_name.begin(), city_name.end(), city_name.begin(), ::tolower);
            std::string::size_type idx = city_name.find(city1_input);
            if (idx != std::string::npos ) {
                city1_result[city1_total] = i;
                city1_total++;
            }
        }
        if (city1_total == 0) {
            std::cout << "No city matches your input." << std::endl;
            continue;
        } else if (city1_total == 1) {
            std::cout << "Matched: " << data[city1_result[0]].name << std::endl;
            city1 = data[city1_result[0]];
        } else {
            std::cout << "There's more than one cities matched your input: " << std::endl;
            for (int i = 0; i < city1_total; i++) {
                std::cout << i + 1 << ". " << data[city1_result[i]].name << std::endl;
            }
            std::cout << "Please select one: ";
            int selection;
            while (true) {
                std::cin >> selection;
                if (selection < 1 || selection > city1_total) {
                    std::cout << "Wrong input, please input again: ";
                } else {
                    break;
                }
            }           
            city1 = data[city1_result[selection - 1]];
        }
        std::cin.sync();
        std::cin.clear();
        // City #2
        City city2;
        std::cout << "City #2: ";
        std::string city2_input;
        getline(std::cin, city2_input);
        city2_input.erase(0, city2_input.find_first_not_of(" "));
        city2_input.erase(city2_input.find_last_not_of(" ") + 1);
        std::transform(city2_input.begin(), city2_input.end(), city2_input.begin(), ::tolower);
        if (city2_input == "bye") {
            std::cout << "Bye!" << std::endl;
            exit(0);
        }
        int city2_result[ARRAY_SIZE];
        int city2_total = 0;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            std::string city_name = data[i].name;
            std::transform(city_name.begin(), city_name.end(), city_name.begin(), ::tolower);
            std::string::size_type idx = city_name.find(city2_input);
            if (idx != std::string::npos ) {
                city2_result[city2_total] = i;
                city2_total++;
            }
        }
        if (city2_total == 0) {
            std::cout << "No city matches your input." << std::endl;
            continue;
        } else if (city2_total == 1) {
            std::cout << "Matched: " << data[city2_result[0]].name << std::endl;
            city2 = data[city2_result[0]];
        } else {
            std::cout << "There's more than one cities matched your input: " << std::endl;
            for (int i = 0; i < city2_total; i++) {
                std::cout << i + 1 << ". " << data[city2_result[i]].name << std::endl;
            }
            std::cout << "Please select one: ";
            int selection;
            while (true) {
                std::cin >> selection;
                if (selection < 1 || selection > city2_total) {
                    std::cout << "Wrong input, please input again: ";
                } else {
                    break;
                }
            }
            city2 = data[city2_result[selection - 1]];
        }
        // Calculation
        std::cout << "The distance between " << city1.name << " and " << city2.name << " is " << get_distance(city1, city2) << "km." << std::endl << std::endl;
        std::cin.sync();
        std::cin.clear();
    }
}

std::vector<std::string> split(std::string str, std::string pattern) {
    std::string::size_type pos;
    std::vector<std::string> result;
    str += pattern;
    int size = str.size();
    for (int i = 0; i < size; i++) {
        pos = str.find(pattern, i);
        if (pos < size) {
            std::string s = str.substr(i, pos - i);
            result.push_back(s);
            i = pos + pattern.size() - 1;
        }
    }
    return result;
}

double get_distance(City city1, City city2) {
    double radLat1 = city1.latitude * 3.1415926 / 180.0;
    double radLat2 = city2.latitude * 3.1415926 / 180.0;
    double a = radLat1 - radLat2;
    double b = city1.longitude * 3.1415926 / 180.0 - city2.longitude * 3.1415926 / 180.0;
    double dst = 2 * asin((sqrt(pow(sin(a / 2), 2) + cos(radLat1) * cos(radLat2) * pow(sin(b / 2), 2) )));
    dst = dst * 6378.137;
    dst = round(dst * 10000) / 10000;
    return dst;
}
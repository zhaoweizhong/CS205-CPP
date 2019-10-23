#include <iostream>
#include <string>
#include <regex>

#define START_CMD 0
#define STOP_CMD 1
#define RESTART_CMD 2
#define STATUS_CMD 3
#define EXIT_CMD 4
#define ERR_CMD 5

using namespace std;

int getCommand(string str);

int main() {
    while (true) {
        cout << "> ";
        string str;
        getline(cin, str);
        str.erase(0, str.find_first_not_of(" "));
        str.erase(str.find_last_not_of(" ") + 1);
        if (str == "") {
            cout << "Empty command" << endl;
            continue;
        }
        regex pattern("^[a-z]+$");
        if (!regex_match(str, pattern)) {
            cout << "Invalid command" << endl;
            continue;
        }
        switch (getCommand(str)) {
        case START_CMD:
            cout << "Command start recognized";
            break;
        case STOP_CMD:
            cout << "Command stop recognized";
            break;
        case RESTART_CMD:
            cout << "Command restart recognized";
            break;
        case STATUS_CMD:
            cout << "Command status recognized";
            break;
        case EXIT_CMD:
            return 0;
            break;
        case ERR_CMD:
            cout << "Invalid command";
            break;
        default:
            cout << "Invalid command";
            break;
        }
        cout << endl;
    }
    return 0;
}

int getCommand(string str) {
    string commands[5] = {"start", "stop", "restart", "status", "exit"};
    for (int i = 0; i < sizeof(commands); i++) {
        if (str == commands[i]) {
            return i;
        }
    }
    return 5;
}
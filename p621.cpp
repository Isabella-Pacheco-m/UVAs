#include <iostream>
#include <string>

using namespace std;

int main() {
    int numCases;
    cin >> numCases;
    while (numCases--) {
        string res_str;
        cin >> res_str;
        if (res_str == "1" || res_str == "4" || res_str == "78") cout << "+\n";
        else if (res_str.length() >= 2 && res_str[res_str.length() - 2] == '3' && res_str[res_str.length() - 1] == '5') cout << "-\n";
          else if (res_str.length() >= 3 && res_str[0] == '9' && res_str[res_str.length() - 1] == '4')  cout << "*\n";
        else if (res_str.length() >= 4 && res_str.substr(0, 3) == "190") cout << "?\n";
        else  cout << "+\n";
    }
    return 0;
}

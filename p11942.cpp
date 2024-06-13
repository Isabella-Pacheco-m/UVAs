#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int numGroups;
    cin >> numGroups;
    cout << "Lumberjacks:" << "\n";
    while (numGroups--) {
        int numPeople = 10;
        int beardLength;
        vector<int> beardLengths;
        while (numPeople--) {
            cin >> beardLength;
            beardLengths.push_back(beardLength);
        }
        bool isIncreasing = true;
        bool isDecreasing = true;
        for (int i = 1; i < beardLengths.size(); ++i) {
            if (beardLengths[i] > beardLengths[i-1]) {
                isDecreasing = false;
            }
            else if (beardLengths[i] < beardLengths[i-1]) {
                isIncreasing = false;
            }
        }
        if (isIncreasing || isDecreasing) {
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }
    return 0;
}

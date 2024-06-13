#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int numCases;
    string name;
    vector<string> song = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int songSize = song.size();
    vector<string> people;

    cin >> numCases;
    while(numCases--){
        cin >> name;
        people.push_back(name);
    }

    int peopleSize = people.size();
    int totalRounds = (peopleSize / songSize) + 1;

    for(int i = 0; i < totalRounds * songSize; i++){
        cout << people[i % peopleSize] << ": " << song[i % songSize] << "\n";
    }

    return 0;
}

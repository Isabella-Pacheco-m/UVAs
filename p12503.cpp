#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int numCases;
  cin >> numCases;
  while (numCases--) {
    int robotPos = 0;
    int numInstructions;
    cin >> numInstructions;
    vector<int> instructions; 
    while (numInstructions--) {
      string instruction;
      cin >> instruction;
      if (instruction == "LEFT") {
        instructions.push_back(-1);
        robotPos--;
      } 
      else if (instruction == "RIGHT") {
        instructions.push_back(1); 
        robotPos++;
      }
      else {
        int instructionNum;
        cin >> instruction >> instructionNum;
        robotPos += instructions[instructionNum-1];
        instructions.push_back(instructions[instructionNum-1]);
      }
    }
    cout << robotPos << endl;
  }
  return 0;
}

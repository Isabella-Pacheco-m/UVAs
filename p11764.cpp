#include <iostream>

using namespace std;

int main() {
  int numCases, numCase = 1;
  cin >> numCases;
  while (numCases--) {
    int numWalls;
    cin >> numWalls;
    int lowJumps = 0, highJumps = 0;
    int previousHeight, currentHeight;
    if (numWalls > 0) {
      cin >> previousHeight;
      for (int i = 1; i < numWalls; i++) {
        cin >> currentHeight;
        if (currentHeight > previousHeight) {
          highJumps++;
        } else if (currentHeight < previousHeight) {
          lowJumps++;
        }
        previousHeight = currentHeight;
      }
    }
    cout << "Case " << numCase << ": " << highJumps << " " << lowJumps << endl;
    numCase++;
  }
  return 0;
}

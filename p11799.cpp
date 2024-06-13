#include <iostream>
#include <string>

using namespace std;

int main() {
  int numCases;
  cin >> numCases;
  int numCase = 1;
  while (numCases--) {
    int numKids;
    cin >> numKids;
    int speed, maxSpeed = 0;
    for (int i = 0; i < numKids; i++) {
      cin >> speed;
      if (speed > maxSpeed)
        maxSpeed = speed;
    }
    cout << "Case " << numCase << ": " << maxSpeed << endl;
    numCase += 1;
  }
  return 0;
}
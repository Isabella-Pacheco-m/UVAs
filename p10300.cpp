#include <iostream>

using namespace std;

int main() {
  int numCases;
  cin >> numCases;
  for (int numCase = 1; numCase <= numCases; numCase++) {
    int numFarmers, result = 0;
    cin >> numFarmers;
    while (numFarmers--) {
      int size, animals, friendliness;
      cin >> size >> animals >> friendliness;
      int premium = size * friendliness;
      result += premium;
    }
    cout << result << endl;
  }
  return 0;
}


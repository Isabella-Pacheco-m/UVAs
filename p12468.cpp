#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    int distanciaDirectaA = b - a;
    int distanciaDirectaB = a - b;
    int distanciaIndirectaA = (99 + 1) - (b - a);
    int distanciaIndirectaB = (99 + 1) - (a - b);
    if (a == -1 && b == -1)
      break;
    else if (a < b)
      cout << min(distanciaDirectaA, distanciaIndirectaA) << endl;
    else if (b < a)
      cout << min(distanciaDirectaB, distanciaIndirectaB) << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}
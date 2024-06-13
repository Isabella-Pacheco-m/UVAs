#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int num;
  vector<int> digits;
  while (cin >> num && num != 0) {
    int sum = 0;
    if (num < 10) {
      cout << num << "\n";
    } else {
      digits.clear();
      for (char n : to_string(num)) {
        digits.push_back(n - '0');
      }
      for (int i = 0; i < digits.size(); i++) {
        sum += digits[i];
      }
      while (sum >= 10) {
        int newSum = 0;
        while (sum > 0) {
          newSum += sum % 10;
          sum /= 10;
        }
        sum = newSum;
      }
      cout << sum << "\n";
    }
  }
  return 0;
}

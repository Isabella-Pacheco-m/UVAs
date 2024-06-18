#include <iostream>

using namespace std;

int main() {
  int H, U, D, F;
  while (cin >> H >> U >> D >> F) {
    if (H == 0)
      break;

    float initHeight = 0;
    int day = 0;
    float fatigueReduction = U * (F / 100.0);
    float currentClimb = U;
    bool flag = true;
    while (initHeight >= 0 && flag) {
      day++;
      if (currentClimb > 0)
        initHeight += currentClimb;
      if (initHeight > H) {
        cout << "success on day " << day << endl;
        flag = false;
      }
      initHeight -= D;
      if (initHeight < 0) {
        cout << "failure on day " << day << endl;
        flag = false;
      }
      currentClimb -= fatigueReduction;
      if (currentClimb < 0)
        currentClimb = 0;
    }
  }
  return 0;
}

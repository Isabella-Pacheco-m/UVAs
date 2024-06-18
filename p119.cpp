#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  int numPeople;
  bool flag = true;
  while (cin >> numPeople) {
    map<string, int> balances;
    vector<string> names(numPeople);
    if(!flag) cout << endl;
    flag = false;
    for (int i = 0; i < numPeople; ++i) {
      cin >> names[i];
      balances[names[i]] = 0;
    }
    for (int i = 0; i < numPeople; ++i) {
      string giver;
      int money, numReceivers;
      cin >> giver >> money >> numReceivers;
      if (numReceivers > 0) {
        int giftAmount = money / numReceivers;
        int totalDistributed = giftAmount * numReceivers;
        for (int j = 0; j < numReceivers; ++j) {
          string receiver;
          cin >> receiver;
          balances[receiver] += giftAmount;
        }
        balances[giver] -= totalDistributed;
      }
    }
    for (const string &name : names) {
      cout << name << " " << balances[name] << endl;
    }
  }
  return 0;
}

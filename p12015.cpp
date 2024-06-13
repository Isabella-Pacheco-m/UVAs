#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool sortByRelevance(const pair<string, int> &a, const pair<string, int> &b) {
  return a.second > b.second;
}

int main() {
  int numCases;
  cin >> numCases;
  for (int caseNum = 1; caseNum <= numCases; ++caseNum) {
    int maxRelevance = 1;
    vector<pair<string, int>> websites(10);
    for (int i = 0; i < 10; ++i) {
      cin >> websites[i].first >> websites[i].second;
      if (websites[i].second > maxRelevance)
        maxRelevance = websites[i].second;
    }
    sort(websites.begin(), websites.end(), sortByRelevance);
    cout << "Case #" << caseNum << ":" << endl;
    for (const auto &website : websites) {
      if (website.second == maxRelevance)
        cout << website.first << endl;
    }
  }
  return 0;
}

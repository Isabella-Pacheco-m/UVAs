#include <iostream>
#include <map>
#include <string>

using namespace std;

bool is_regular_palindrome(string s) {
  int n = s.length() - 1;
  bool ans = true;
  for (int i = 0; i <= n; i++)
    if (s[i] == s[n])
      n--;
    else
      ans = false;
  return ans;
}

bool is_mirroed_string(string s) {
  bool ans = true;
  string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
  string s2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
  map<char, char> map;
  for (int i = 0; i < s1.size(); i++)
    map[s1[i]] = s2[i]; // crear el mapa
  for (int i = 0; i < s.size(); i++)
    if (map[s[i]] != s[s.size() - 1 - i])
      ans = false;
  return ans;
}

int main() {
  string word;
  while(cin >> word)
    if (is_regular_palindrome(word) && is_mirroed_string(word))
      cout << word << " -- is a mirrored palindrome.\n\n";
    else if (is_regular_palindrome(word))
      cout << word << " -- is a regular palindrome.\n\n";
    else if (is_mirroed_string(word))
      cout << word << " -- is a mirrored string.\n\n";
    else
      cout << word << " -- is not a palindrome.\n\n";
  return 0;
}
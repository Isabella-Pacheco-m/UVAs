#include <iostream>
#include <string>

using namespace std;

int main() {
  string s; 
  while(cin >> s){
    if (s == "END") break;
    int ctn = 1; 
    while (s != "1") {
      int len = s.size(); 
      s = to_string(len);
      ctn++; 
    }
    cout << ctn << endl;
  }
  return 0;
}
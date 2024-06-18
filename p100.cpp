#include <iostream>

using namespace std;

int collatzLength(int x) {
    int count = 1; 
    while (x != 1) {
        if (x % 2 == 0) x = x / 2;
        else x = (3 * x) + 1;
        count++;
    }
    return count;
}

int solveProblem(int a, int b){
    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }
    int maxLength = 0;
    for (int i = a; i <= b; ++i) {
        int length = collatzLength(i);
        if (length > maxLength) 
            maxLength = length;
    }
    return maxLength;
}

int main() {
    int i, j, ans;
    while(cin >> i >> j){
        ans = solveProblem(i, j);
        cout << i << " " << j << " " << ans << endl;
    }
    return 0;
}
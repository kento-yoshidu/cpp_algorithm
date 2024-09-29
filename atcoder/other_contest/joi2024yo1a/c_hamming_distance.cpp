// https://atcoder.jp/contests/joi2024yo1a/tasks/joi2024_yo1a_c

#include <iostream>
#include <string>
using namespace std;

int func(int n, string s, string t) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            ans++;
        }
    }

    return ans;
}

int main() {
    cout << func(3, "joi", "ioi") << endl;
    //=> 1

    cout << func(5, "march", "april") << endl;
    //=> 4

    cout << func(6, "sample", "sample") << endl;
    //=> 0
}

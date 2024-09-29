// https://atcoder.jp/contests/joi2025yo1a/tasks/joi2025_yo1a_c

#include <iostream>
using namespace std;

string func(int n, string s) {
    string ans = "";

    for (int i = 0; i < n; i++) {
        if (s[i] == 'J') {
            ans += "O";
        } else if (s[i] == 'O') {
            ans += "I";
        } else {
            ans += "J";
        }
    }

    return ans;
}

int main() {
    cout << func(3, "JOI") << endl;
    //=> OIJ

    cout << func(10, "JOIOOJOOOJ") << endl;
    //=> OIJIIOIIIO
}

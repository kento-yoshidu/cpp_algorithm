// https://atcoder.jp/contests/joi2024yo1c/tasks/joi2024_yo1c_c

#include <iostream>
using namespace std;

string func(int n, string s) {
    for (int i = 0; i < n-1; i++) {
        if (s[i] != s[i+1]) {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    cout << func(4, "bbbb") << endl;
    //=> Yes

    cout << func(7, "pppdppp") << endl;
    //=> No

    cout << func(2, "xx") << endl;
    //=> Yes

    cout << func(9, "joijoijoi") << endl;
    //=> No
}

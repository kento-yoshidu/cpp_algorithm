// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_c

#include <iostream>
using namespace std;

string func(int n, string s) {
    int arr[5] = {0};

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            arr[0] = 1;
        } else if (s[i] == 'B') {
            arr[1] = 1;
        } else if (s[i] == 'C') {
            arr[2] = 1;
        } else if (s[i] == 'D') {
            arr[3] = 1;
        } else {
            arr[4] = 1;
        }
    }

    int ans = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == 1) {
            ans++;
        }
    }

    if (ans >= 3) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(4, "BABE") << endl;
    //=> Yes

    cout << func(3, "DAD") << endl;
    //=> No

    cout << func(5, "BACED") << endl;
    //=> Yes

    cout << func(28, "EEEEEEEEEEEEEEEEEEEEEEEEEEEE") << endl;
    //=> No
}

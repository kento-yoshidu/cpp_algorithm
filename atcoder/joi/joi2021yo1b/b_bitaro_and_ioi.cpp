// https://atcoder.jp/contests/joi2021yo1b/tasks/joi2021_yo1b_b

#include <iostream>
using namespace std;

string func(int n, string s) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (s[i] == 'I' && s[j] == 'O' && s[k] == 'I') {
                    return "Yes";
                }
            }
        }
    }

    return "No";
}

int main() {
    cout << func(8, "BITAROOI") << endl;
    //=> Yes

    cout << func(6, "BBOOII") << endl;
    //=> No

    cout << func(5, "IOIOI") << endl;
    //=> Yes

    cout << func(9, "RATRATRAT") << endl;
    //=> No

    cout << func(1, "A") << endl;
    //=> No
}

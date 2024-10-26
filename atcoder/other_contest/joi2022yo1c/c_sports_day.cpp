// https://atcoder.jp/contests/joi2022yo1c/tasks/joi2022_yo1c_c

#include <iostream>
using namespace std;

char func(int n, int k, string s) {
    int r = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            r++;
        }
    }

    if (r+1 == k) {
        return 'R';
    } else {
        return 'W';
    }
}

int main() {
    cout << func(7, 3, "RWWRWW") << endl;
    //=> R

    cout << func(5, 3, "RWRR") << endl;
    //=> W

    cout << func(70, 1, "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW") << endl;
    //=> R
}

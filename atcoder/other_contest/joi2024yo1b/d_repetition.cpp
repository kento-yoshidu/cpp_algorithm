// https://atcoder.jp/contests/joi2024yo1b/tasks/joi2024_yo1b_d

#include <iostream>
using namespace std;

int func(int x, int n) {
    int ans = 0;

    while (x < n) {
        int r = x % 3;

        ans++;

        if (r == 0) {
            x++;
        } else if (r == 1) {
            x *= 2;
        } else {
            x *= 3;
        }
    }

    return ans;
}

int main() {
    cout << func(2, 40) << endl;
    //=> 4

    cout << func(3, 4) << endl;
    //=> 1

    cout << func(20, 62) << endl;
    //=> 3

    cout << func(1, 100000) << endl;
    //=> 19
}

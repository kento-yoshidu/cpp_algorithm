// https://atcoder.jp/contests/joi2025yo1c/tasks/joi2025_yo1c_c

#include <iostream>
using namespace std;

int func(int n, int a, int b) {
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if ((i % a == 0 && i % b != 0) || (i % a != 0 && i % b == 0)) {
            ans++;
        }
    }

    return ans;
}

int main() {
    cout << func(6, 2, 3) << endl;
    //=> 3

    cout << func(1, 5, 3) << endl;
    //=> 1

    cout << func(100, 1, 2) << endl;
    //=> 50
}

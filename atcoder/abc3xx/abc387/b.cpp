// https://atcoder.jp/contests/abc387/tasks/abc387_b

#include <iostream>
using namespace std;

int func(int x) {
    int ans = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j != x) {
                ans += i * j;
            }
        }
    }

    return ans;
}

int main() {
    cout << func(1) << endl;
    //=> 2024

    cout << func(11) << endl;
    //=> 2025

    cout << func(24) << endl;
    //=> 1929
}

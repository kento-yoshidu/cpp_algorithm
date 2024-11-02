// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_h

#include <iostream>
using namespace std;

int func(int n, int s) {
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j <= s) {
                ans += 1;
            }
        }
    }

    return ans;
}

int main() {
    cout << func(3, 4) << endl;
    //=> 6

    cout << func(869, 120) << endl;
    //=> 7140
}

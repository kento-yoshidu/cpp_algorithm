// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_g

#include <iostream>
using namespace std;

int func(int n, int x, int y) {
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (i % x == 0 || i % y == 0) {
            ans++;
        }
    }

    return ans;
}

int main() {
    cout << func(15, 3, 5) << endl;
    //=> 7

    cout << func(1000000, 11, 13) << endl;
    //=> 160839
}

// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_e

#include <iostream>
using namespace std;

int func(int n, int a[]) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i];
    }

    return ans % 100;
}

int main() {
    int a1[3] = {30, 50, 70};
    cout << func(3, a1) << endl;
    //=> 50

    int a2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << func(10, a2) << endl;
    //=> 55

    int a3[5] = {60, 60, 60, 60, 60};
    cout << func(5, a3) << endl;
    //=> 0
}

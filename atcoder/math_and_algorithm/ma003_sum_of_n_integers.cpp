// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_c

#include <iostream>
using namespace std;

int func(int n, int a[]) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i];
    }

    return ans;
}

int main() {
    int a1[5] = {3, 1, 4, 1, 5};
    cout << func(5, a1) << endl;
    //=> 14

    int a2[3] = {10, 20, 50};
    cout << func(3, a2) << endl;
    //=> 80

    int a3[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << func(10, a3) << endl;
    //=> 55
}

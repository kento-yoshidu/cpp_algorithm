// https://atcoder.jp/contests/tessoku-book/tasks/dp_a

#include <iostream>
#include <algorithm>
using namespace std;

int func(int n, int h[]) {
    int dp[100009];

    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < n; i++) {
        dp[i] = min(abs(h[i] - h[i-2]) + dp[i-2], abs(h[i] - h[i-1]) + dp[i-1]);
    }

    return dp[n-1];
}

int main() {
    int a[4] = {10, 30, 40, 20};

    cout << func(4, a) << endl;
    //=> 30

    int a_2[2] = {10, 10};
    cout << func(2, a_2) << endl;
    //=> 0

    int a_3[6] = {30, 10, 60, 10, 60, 50};
    cout << func(6, a_3) << endl;
    //=> 40
}

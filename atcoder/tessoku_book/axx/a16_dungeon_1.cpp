// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_p

#include <iostream>
#include <algorithm>
using namespace std;

int func(int n, int a[], int b[]) {
    int dp[100009];

    dp[0] = 0;
    dp[1] = a[0];

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1] + a[i-1], dp[i-2] + b[i-2]);
    }

    return dp[n-1];
}

int main() {
    int a[4] = {2, 4, 1, 3};
    int b[3] = {5, 3, 7};

    cout << func(5, a, b) << endl;
    //=> 8

    int a_2[9] = {1, 19, 75, 37, 17, 16, 33, 18, 22};
    int b_2[8] = {41, 28, 89, 74, 98, 43, 42, 31};

    cout << func(10, a_2, b_2) << endl;
    //=> 157
}

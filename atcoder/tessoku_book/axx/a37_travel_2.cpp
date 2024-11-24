// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ak

#include <iostream>
using namespace std;

int func(int n, int m, int b, int a[], int c[]) {
    int a_total = 0, c_total = 0;

    for (int i = 0; i < n; i++) {
        a_total += a[i];
    }

    for (int i = 0; i < m; i++) {
        c_total += c[i];
    }

    return a_total * m + c_total * n + b*n*m;
}

int main() {
    int a[2] = {10, 20};
    int c[3] = {1, 2, 3};

    cout << func(2, 3, 100, a, c) << endl;
    //=> 702
}

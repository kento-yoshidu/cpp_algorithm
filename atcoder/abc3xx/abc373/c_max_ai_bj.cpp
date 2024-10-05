// https://atcoder.jp/contests/abc373/tasks/abc373_c

#include <iostream>
using namespace std;

int func(int n, int a[], int b[]) {
    int x = -1e9;
    int y = -1e9;

    for (int i = 0; i < n; i++) {
        x = std::max(x, a[i]);
        y = std::max(y, b[i]);
    }

    return x + y;
}

int main() {
    int a1[2] = {-1, 5};
    int b1[2] = {3, -7};
    cout << func(2, a1, b1) << endl;
    //=> 8

    int a2[6] = {15, 12, 3, -13, -1, -19};
    int b2[6] = {7, 17, -13, -10, 18, 4};
    cout << func(6, a2, b2) << endl;
    //=> 33
}

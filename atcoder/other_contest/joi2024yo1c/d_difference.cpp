// https://atcoder.jp/contests/joi2024yo1c/tasks/joi2024_yo1c_d

#include <iostream>
using namespace std;

int func(int k, int n, int a[], int m, int b[]) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] + k == b[j]) {
                ans++;
            }
        }
    }

    return ans;
}

int main() {
    int n1[4] = {1, 8, 6, 8};
    int m1[3] = {7, 9, 4};
    cout << func(1, 4, n1, 3, m1) << endl;
    //=> 3

    int n2[4] = {31, 41, 59, 26};
    int m2 [5] = {29, 97, 92, 45, 8};
    cout << func(66, 4, n2, 5, m2) << endl;
    //=> 2

    int n3[5] = {1, 1, 1, 1, 1};
    int m3[6] = {100, 100, 100, 100, 100, 100};
    cout << func(99, 5, n3, 6, m3) << endl;
    //=> 30

    int n4[1] = {11};
    int m4[1] = {18};
    cout << func(100, 1, n4, 1, m4) << endl;
    //=> 0
}

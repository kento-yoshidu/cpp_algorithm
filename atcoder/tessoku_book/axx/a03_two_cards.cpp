// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_c

#include <iostream>
using namespace std;

string func(int n, int k, int p[], int q[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i] + q[j] == k) {
                return "Yes";
            }
        }
    }

    return "No";
}

int main() {
    int p1[3] = {17, 57, 99};
    int q1[3] = {10, 36, 53};
    cout << func(3, 100, p1, q1) << endl;
    //=> No

    int p2[5] = {10, 20, 30, 40, 50};
    int q2[5] = {1, 2, 3, 4, 5};
    cout << func(5, 53, p2, q2) << endl;
    //=> Yes

    return 0;
}

// https://atcoder.jp/contests/abc009/tasks/abc009_1

#include <iostream>
using namespace std;

int func(int n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return n / 2 + 1;
    }
}

int main() {
    cout << func(2) << endl;
    // 1

    cout << func(5) << endl;
    // 3

    cout << func(1) << endl;
    // 1
}

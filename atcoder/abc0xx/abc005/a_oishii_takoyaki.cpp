// https://atcoder.jp/contests/abc005/tasks/abc005_1

#include <iostream>
using namespace std;

int func(int x, int y) {
    return y / x;
}

int main() {
    cout << func(4, 8) << endl;
    // 2

    cout << func(4, 7) << endl;
    // 1

    cout << func(4, 3) << endl;
    // 0
}

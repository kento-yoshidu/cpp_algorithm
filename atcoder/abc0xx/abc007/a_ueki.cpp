// https://atcoder.jp/contests/abc007/tasks/abc007_1

#include <iostream>
using namespace std;

int func(int n) {
    return n - 1;
}

int main() {
    cout << func(4) << endl;
    // 3

    cout << func(100) << endl;
    // 99
    cout << func(1) << endl;
    // 0
}

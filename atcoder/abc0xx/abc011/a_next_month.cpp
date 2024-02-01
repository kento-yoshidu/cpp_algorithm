// https://atcoder.jp/contests/abc011/tasks/abc011_1

#include <iostream>
using namespace std;

int func(int n) {
    return n % 12 + 1;
}

int main() {
    cout << func(1) << endl;
    // 2

    cout << func(12) << endl;
    // 1
}

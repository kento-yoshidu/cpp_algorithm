// https://atcoder.jp/contests/abc004/tasks/abc004_1

#include <iostream>
using namespace std;

int func(int n) {
    return n * 2;
}

int main() {
    cout << func(1000) << endl;
    // 2000

    cout << func(1000000) << endl;
    // 2000000

    cout << func(0) << endl;
    // 0
}

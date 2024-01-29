// https://atcoder.jp/contests/abc008/tasks/abc008_1

#include <iostream>
using namespace std;

int func(int s, int t) {
    return t - s + 1;
}

int main() {
    cout << func(4, 7) << endl;
    // 4

    cout << func(1, 1) << endl;
    // 1
}

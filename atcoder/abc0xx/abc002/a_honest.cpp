// https://atcoder.jp/contests/abc002/submissions/49601286

#include <iostream>
using namespace std;

int func(int a, int b) {
    return max(a, b);
}

int main() {
    cout << func(10, 11) << endl;
    // 11

    cout << func(100000000, 10000000) << endl;
    // 100000000
}

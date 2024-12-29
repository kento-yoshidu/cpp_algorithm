// https://atcoder.jp/contests/abc044/tasks/abc044_a

#include <iostream>
using namespace std;

int func(int n, int k, int x, int y) {
    if (n <= k) {
        return n * x;
    } else {
        return k * x + (n - k) * y;
    }
}

int main() {
    cout << func(5, 3, 10000, 9000) << endl;
    //=> 48000

    cout << func(2, 3, 10000, 9000) << endl;
    //=> 20000
}

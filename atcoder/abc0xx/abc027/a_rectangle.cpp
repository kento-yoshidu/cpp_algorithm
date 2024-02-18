// https://atcoder.jp/contests/abc027/tasks/abc027_a

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
    return a ^ b ^ c;
}

int func2(int a, int b, int c) {
    if (a == b && b == c) {
        return a;
    }

    if (a == b && b != c) {
        return c;
    } else if (a != b && b == c) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << func(1, 1, 2) << endl;
    cout << func2(1, 1, 2) << endl;
    //=> 2

    cout << func(4, 3, 4) << endl;
    cout << func2(4, 3, 4) << endl;
    //=> 3

    cout << func(5, 5, 5) << endl;
    cout << func2(5, 5, 5) << endl;
    //=> 5
}

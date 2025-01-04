// https://atcoder.jp/contests/abc057/tasks/abc057_a

#include <iostream>
using namespace std;

int func(int a, int b) {
    return (a + b) % 24;
}

int main() {
    cout << func(9, 12) << endl;
    //=> 21

    cout << func(19, 0) << endl;
    //=> 19

    cout << func(23, 2) << endl;
    //=> 1
}

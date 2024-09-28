// https://atcoder.jp/contests/joi2025yo1a/tasks/joi2025_yo1a_a

#include <iostream>
using namespace std;

int func(int a) {
    return a / 5;
}

int main() {
    cout << func(9) << endl;
    //=> 1

    cout << func(10) << endl;
    //=> 2

    cout << func(3) << endl;
    //=> 0

    cout << func(100) << endl;
    //=> 20
}

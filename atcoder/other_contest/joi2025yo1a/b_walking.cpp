// https://atcoder.jp/contests/joi2025yo1a/tasks/joi2025_yo1a_b

#include <iostream>
using namespace std;

int func(int x) {
    if (x % 2 == 0) {
        return x / 2;
    } else {
        return x / 2 + 3;
    }
}

int main() {
    cout << func(3) << endl;
    //=> 4

    cout << func(6) << endl;
    //=> 3

    cout << func(1) << endl;
    //=> 3

    cout << func(37) << endl;
    //=> 21

    cout << func(100) << endl;
    //=> 50
}

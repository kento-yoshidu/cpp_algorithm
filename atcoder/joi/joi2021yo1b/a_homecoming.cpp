// https://atcoder.jp/contests/joi2021yo1b/tasks/joi2021_yo1b_a

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
    if (a <= c && c < b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << func(2, 5, 3) << endl;
    //=> 1

    cout << func(20, 22, 19) << endl;
    //=> 0

    cout << func(24, 30, 30) << endl;
    //=> 0

    cout << func(1, 100, 99) << endl;
    //=> 1
}

// https://atcoder.jp/contests/joi2024yo1c/custom_test

#include <iostream>
using namespace std;

int func(int h, int m) {
    return h * 60 + m;
}

int main() {
    cout << func(8, 30) << endl;
    //=> 510

    cout << func(14, 0) << endl;
    //=> 840

    cout << func(0, 29) << endl;
    //=> 29

    cout << func(23, 59) << endl;
    //=> 1439
}

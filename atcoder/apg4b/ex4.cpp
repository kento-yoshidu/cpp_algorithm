// https://atcoder.jp/contests/APG4b/tasks/APG4b_cs

#include <iostream>
using namespace std;

int func(int y) {
    int seconds = 60 * 60 * 24 * 365;

    return seconds * y;
}

int main() {
    cout << func(1) << endl;
    //=> 31536000

    cout << func(2) << endl;
    //=> 63072000

    cout << func(5) << endl;
    //=> 157680000

    cout << func(10) << endl;
    //=> 315360000
}

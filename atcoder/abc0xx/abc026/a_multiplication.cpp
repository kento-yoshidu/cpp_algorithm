// https://atcoder.jp/contests/abc026/tasks/abc026_a

#include <iostream>
using namespace std;

int func(int a) {
    return a / 2 * a / 2;
}

int main() {
    cout << func(10) << endl;
    //=> 25

    cout << func(60) << endl;
    //=> 900
}

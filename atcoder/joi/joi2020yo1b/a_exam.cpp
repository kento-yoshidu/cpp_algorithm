// https://atcoder.jp/contests/joi2020yo1b/tasks/joi2020_yo1b_a

#include <iostream>
#include <algorithm>
using namespace std;

int func(int a, int b, int c) {
    return a + b + c - min(a, min(b, c));
}

int main() {
    cout << func(70, 80, 90) << endl;
    //=> 170

    cout << func(70, 100, 70) << endl;
    //=> 170

    cout << func(70, 70, 70) << endl;
    //=> 140
}

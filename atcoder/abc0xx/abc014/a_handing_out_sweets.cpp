// https://atcoder.jp/contests/abc014/tasks/abc014_1

#include <iostream>
using namespace std;

int func(int a, int b) {
    if (a % b == 0) {
        return 0;
    } else {
        return (a / b + 1) * b - a;
    }
}

int main() {
    cout << func(7, 3) << endl;
    //=> 2

    cout << func(5, 5) << endl;
    //=> 5

    cout << func(1, 100) << endl;
    //=> 99

    cout << func(25, 12) << endl;
    //=> 11
}

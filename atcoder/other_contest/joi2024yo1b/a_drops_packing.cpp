// https://atcoder.jp/contests/joi2024yo1b/tasks/joi2024_yo1b_a

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
    return a*b + c;
}

int main() {
    cout << func(20, 3, 10) << endl;
    //=> 70

    cout << func(70, 2, 100) << endl;
    //=> 240

    cout << func(23, 10, 15) << endl;
    //=> 245

    cout << func(100, 100, 100) << endl;
    //=> 10100
}

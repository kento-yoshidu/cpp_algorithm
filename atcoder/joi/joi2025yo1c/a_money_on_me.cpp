// https://atcoder.jp/contests/joi2025yo1c/tasks/joi2025_yo1c_a

#include <iostream>
using namespace std;

int func(int a, int b) {
    return a * 1000 + b * 10000;
}

int main() {
    cout << func(7, 2) << endl;
    //=> 27000

    cout << func(11, 1) << endl;
    //=> 21000
}

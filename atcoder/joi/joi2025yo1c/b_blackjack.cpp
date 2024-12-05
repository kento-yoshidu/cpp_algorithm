// https://atcoder.jp/contests/joi2025yo1c/tasks/joi2025_yo1c_b

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
    if (a + b + c <= 21) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << func(5, 10, 6) << endl;
    //=> 1

    cout << func(7, 8, 13) << endl;
    //=> 0
}

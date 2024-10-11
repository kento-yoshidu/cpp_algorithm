// https://atcoder.jp/contests/joi2024yo1a/tasks/joi2024_yo1a_b

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
    if (a + b == c || a + c == b || b + c == a) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << func(3 , 5, 2) << endl;
    //=> 1

    cout << func(2, 3, 4) << endl;
    //=> 0

    cout << func(100, 50, 50) << endl;
    //=> 1

    cout << func(1, 1, 1) << endl;
    //=> 0
}

// https://atcoder.jp/contests/joi2024yo1b/tasks/joi2024_yo1b_b

#include <iostream>
using namespace std;

int func(int x) {
    if (x % 7 == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << func(2) << endl;
    //=> 1

    cout << func(10) << endl;
    //=> 0

    cout << func(100) << endl;
    //=> 1
}

// https://atcoder.jp/contests/joi2024yo1a/tasks/joi2024_yo1a_a

#include <iostream>
using namespace std;

int func(int x, int y) {
    return x + y + 3;
}

int main() {
    cout << func(2, 4) << endl;
    //=> 9

    cout << func(15, 30) << endl;
    //=> 48

    cout << func(0, 0) << endl;
    //=> 3
}

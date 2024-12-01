// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_a

#include <iostream>
using namespace std;

int func(int x) {
    return x % 21;
}

int main() {
    cout << func(50) << endl;
    //=> 8

    cout << func(42) << endl;
    //=> 0

    cout << func(5) << endl;
    //=> 5
}

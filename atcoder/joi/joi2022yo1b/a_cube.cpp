// https://atcoder.jp/contests/joi2022yo1b/tasks/joi2022_yo1b_a

#include <iostream>
using namespace std;

int func(int x) {
    return x * x * x;
}

int main() {
    cout << func(4) << endl;
    //=> 64

    cout << func(1) << endl;
    //=> 1

    cout << func(999) << endl;
    //=> 997002999
}

// https://atcoder.jp/contests/joi2022yo1c/tasks/joi2022_yo1c_b

#include <iostream>
using namespace std;

int func(int s, int a, int b) {
    if (s < a) {
        return 250;
    } else {
        return (s - a + b - 1) / b * 100 + 250;
    }
}

int main() {
    cout << func(28, 20, 5) << endl;
    //=> 450

    cout << func(1, 100, 1) << endl;
    //=> 250

    cout << func(100, 1, 1) << endl;
    //=> 10150
}

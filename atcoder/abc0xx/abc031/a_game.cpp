// https://atcoder.jp/contests/abc031/tasks/abc031_a

#include <iostream>
using namespace std;

int func(int a, int d) {
    if (a < d) {
        return (a + 1) * d;
    } else {
        return a * (d + 1);
    }
}

int main() {
    cout << func(31, 87) << endl;
    //=> 2784

    cout << func(101, 65) << endl;
    //=> 6666

    cout << func(3, 3) << endl;
    //=> 12
}

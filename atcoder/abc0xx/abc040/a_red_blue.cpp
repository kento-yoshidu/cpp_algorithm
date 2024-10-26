// https://atcoder.jp/contests/abc040/tasks/abc040_a

#include <iostream>
using namespace std;

int func(int n, int x) {
    return (min(n - x, x - 1));
}

int main() {
    cout << func(5, 2) << endl;
    //=> 1

    cout << func(6, 4) << endl;
    //=> 2

    cout << func(90, 30) << endl;
    //=> 29
}

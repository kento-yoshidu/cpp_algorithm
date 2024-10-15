// https://atcoder.jp/contests/abc037/tasks/abc037_a

#include <iostream>
#include <algorithm>
using namespace std;

int func(int a, int b, int c) {
    return c / min(a, b);
}

int main() {
    cout << func(3, 5, 6) << endl;
    //=> 2

    cout << func(8, 6, 20) << endl;
    //=> 3
}

// https://atcoder.jp/contests/abc045/tasks/abc045_a

#include <iostream>
using namespace std;

int func(int a, int b, int h) {
    return (a + b) * h / 2;
}

int main() {
    cout << func(3, 4, 2) << endl;
    //=> 7

    cout << func(4, 4, 4) << endl;
    //=> 16
}

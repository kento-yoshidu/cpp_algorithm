// https://atcoder.jp/contests/abc023/tasks/abc023_a

#include <iostream>
using namespace std;

int func(int x) {
    return x / 10 + x % 10;
}

int main() {
    cout << func(23) << endl;
    //=> 5

    cout << func(70) << endl;
    //=> 7

    cout << func(99) << endl;
    //=> 18
}

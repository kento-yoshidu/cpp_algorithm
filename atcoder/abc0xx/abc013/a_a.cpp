// https://atcoder.jp/contests/abc013/tasks/abc013_1

#include <iostream>
using namespace std;

int func(char c) {
    return c - 'A' + 1;
}

int main() {
    cout << func('A') << endl;
    //=> 1

    cout << func('B') << endl;
    //=> 2

    cout << func('C') << endl;
    //=> 3

    cout << func('D') << endl;
    //=> 4

    return 0;
}

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_bz

#include <iostream>
using namespace std;

int func(int a, int b) {
    return a + b;
}

int main() {
    cout << func(1, 2) << endl;
    //=> 3

    cout << func(77, 23) << endl;
    //=> 100

    cout << func(100, 100) << endl;
    //=> 200
}
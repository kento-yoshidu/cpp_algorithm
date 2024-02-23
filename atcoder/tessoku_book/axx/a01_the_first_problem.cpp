// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_a

#include <iostream>
using namespace std;

int func(int n) {
    return n * n;
}

int main() {
    cout << func(2) << endl;
    //=> 4

    cout << func(8) << endl;
    //=> 64

    cout << func(100) << endl;
    //=> 10000
}

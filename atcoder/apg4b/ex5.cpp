// https://atcoder.jp/contests/APG4b/tasks/APG4b_cr

#include <iostream>
using namespace std;

int func(int a, int b) {
    return a + b;
}

int main() {
    cout << func(1, 2) << endl;
    //=> 3

    cout << func(100, 99) << endl;
    //=> 199
}

// https://atcoder.jp/contests/abc050/tasks/abc050_a

#include <iostream>
using namespace std;

int func(int a, string op, int b) {
    if (op == "+") {
        return a + b;
    } else {
        return a - b;
    }
}

int main() {
    cout << func(1, "+", 2) << endl;
    //=> 3

    cout << func(5, "-", 7) << endl;
    //=> -2
}

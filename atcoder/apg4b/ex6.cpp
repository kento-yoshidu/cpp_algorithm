// https://atcoder.jp/contests/APG4b/tasks/APG4b_cq

#include <iostream>
using namespace std;

int func(int a, string op, int b) {
    if (op == "+") {
        return a + b;
    } else if (op == "-") {
        return a - b;
    } else if (op == "*") {
        return a * b;
    } else if (op == "/" && b != 0) {
        return a / b;
    } else {
        return -1;
    }
}

int main() {
    cout << func(1, "+", 2) << endl;
    //=> 3

    cout << func(5, "-", 3) << endl;
    //=> 2

    cout << func(10, "*", 20) << endl;
    //=> 200

    cout << func(10, "/", 3) << endl;
    //=> 3

    cout << func(100, "/", 0) << endl;
    //=> -1

    cout << func(25, "?", 31) << endl;
    //=> -1

    cout << func(0, "+", 0) << endl;
    //=> 0
}
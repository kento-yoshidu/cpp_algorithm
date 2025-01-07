// https://atcoder.jp/contests/abc054/tasks/abc054_a

#include <iostream>
using namespace std;

string func(int a, int b) {
    if (a == b) {
        return "Draw";
    } else if (a == 1) {
        return "Alice";
    } else if (b == 1) {
        return "Bob";
    } else if (a > b) {
        return "Alice";
    } else {
        return "Bob";
    }
}

int main() {
    cout << func(8, 6) << endl;
    //=> Alice

    cout << func(1, 1) << endl;
    //=> Draw

    cout << func(13, 1) << endl;
    //=> Bob
}

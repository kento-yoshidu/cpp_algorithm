// https://atcoder.jp/contests/abc065/tasks/abc065_a

#include <iostream>
using namespace std;

string func(int x, int a, int b) {
    if (a >= b) {
        return "delicious";
    } else if (b - a <= x) {
        return "safe";
    } else {
        return "dangerous";
    }
}

int main() {
    cout << func(4, 3, 6) << endl;
    //=> safe

    cout << func(6, 5, 1) << endl;
    //=> delicious

    cout << func(3, 7, 12) << endl;
    //=> dangerous
}

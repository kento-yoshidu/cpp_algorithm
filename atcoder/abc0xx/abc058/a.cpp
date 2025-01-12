// https://atcoder.jp/contests/abc058/tasks/abc058_a

#include <iostream>
using namespace std;

string func(int a, int b, int c) {
    if (a - b == b - c) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func(2, 4, 6) << endl;
    //=> YES

    cout << func(2, 5, 6) << endl;
    //=> NO

    cout << func(3, 2, 1) << endl;
    //=> YES
}

// https://atcoder.jp/contests/abc016/tasks/abc016_1

#include <iostream>
using namespace std;

string func(int m, int n) {
    if (m % n == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func(1, 1) << endl;
    //=> YES

    cout << func(2, 29) << endl;
    //=> NO

    cout << func(12, 6) << endl;
    //=> YES
}

// https://atcoder.jp/contests/abc061/tasks/abc061_a

#include <iostream>
using namespace std;

string func(int a, int b, int c) {
    if (a <= c && c <= b) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(1, 3, 2) << endl;
    //=> Yes

    cout << func(6, 5, 4) << endl;
    //=> No

    cout << func(2, 2, 2) << endl;
    //=> Yes
}

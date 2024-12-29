// https://atcoder.jp/contests/abc047/tasks/abc047_a

#include <iostream>
using namespace std;

string func(int a, int b, int c) {
    if (a + b == c || a + c == b || b + c == a) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(10, 30, 20) << endl;
    //=> Yes

    cout << func(30, 30, 100) << endl;
    //=> No

    cout << func(56, 25, 31) << endl;
    //=> Yes
}

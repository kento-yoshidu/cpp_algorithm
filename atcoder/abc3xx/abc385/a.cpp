// https://atcoder.jp/contests/abc385/tasks/abc385_a

#include <iostream>
using namespace std;

string func(int a, int b, int c) {
    if (a == b && b == c) {
        return "Yes";
    } else if (a + b == c || a + c == b || b + c == a) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(3, 8, 5) << endl;
    //=> Yes

    cout << func(2, 2, 2) << endl;
    //=> Yes

    cout << func(1, 2, 4) << endl;
    //=> No
}

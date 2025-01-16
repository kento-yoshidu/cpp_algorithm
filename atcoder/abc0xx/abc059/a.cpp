// https://atcoder.jp/contests/abc059/tasks/abc059_a

#include <iostream>
using namespace std;

string func(string a, string b, string c) {
    return string(1, toupper(a[0])) + string(1, toupper(b[0])) + string(1, toupper(c[0]));
}

int main() {
    cout << func("atcoder", "beginner", "contest") << endl;
    //=> ABC

    cout << func("resident", "register", "number") << endl;
    //=> RRN

    cout << func("k", "nearest", "neighbor") << endl;
    //=> KNN

    cout << func("async", "layered", "coding") << endl;
    //=> ALC
}

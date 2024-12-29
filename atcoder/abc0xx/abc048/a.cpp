// https://atcoder.jp/contests/abc048/tasks/abc048_a

#include <iostream>
using namespace std;

string func(string a, string b, string c) {
    return string(1, 'A') + b[0] + 'C';
}

int main() {
    cout << func("AtCoder", "Beginner", "Contest") << endl;
    //=> ABC

    cout << func("AtCoder", "Snuke", "Contest") << endl;
    //=> ASC

    cout << func("AtCoder", "X", "Contest") << endl;
    //=> AXC
}

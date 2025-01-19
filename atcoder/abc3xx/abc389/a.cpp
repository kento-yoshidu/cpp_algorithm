// https://atcoder.jp/contests/abc389/tasks/abc389_a

#include <iostream>
using namespace std;

int func(string s) {
    return (s[0] - '0') * (s[2] - '0');
}

int main() {
    cout << func("3x8") << endl;
    //=> 24

    cout << func("9x9") << endl;
    //=> 81
}

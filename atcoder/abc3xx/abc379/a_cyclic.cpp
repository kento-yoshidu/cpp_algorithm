// https://atcoder.jp/contests/abc379/tasks/abc379_a

#include <iostream>
using namespace std;

string func(string n) {
    return string() + n[1] + n[2] + n[0] + " " + n[2] + n[0] + n[1];
}

int main() {
    cout << func("379") << endl;
    //=> 793 937

    cout << func("919") << endl;
    //=> 199 991
}

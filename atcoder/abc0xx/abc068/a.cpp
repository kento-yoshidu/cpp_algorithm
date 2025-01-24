// https://atcoder.jp/contests/abc068/tasks/abc068_a

#include <iostream>
#include <string>
using namespace std;

string func(int n) {
    return "ABC" + to_string(n);
}

int main() {
    cout << func(100) << endl;
    //=> ABC100

    cout << func(425) << endl;
    //=> 425

    cout << func(999) << endl;
    //=> 999
}

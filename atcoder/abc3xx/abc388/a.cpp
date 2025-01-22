// https://atcoder.jp/contests/abc388/tasks/abc388_a

#include <iostream>
using namespace std;

string func(string s) {
    return string(1, s[0]) + "UPC";
}

int main() {
    cout << func("Kyoto") << endl;
    //=> KUPC

    cout << func("Tohoku") << endl;
    //=> TUPC
}

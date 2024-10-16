// https://atcoder.jp/contests/abc038/tasks/abc038_a

#include <iostream>
using namespace std;

string func(string s) {
    if (s.back() == 'T') {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func("ICEDT") << endl;
    //=> YES

    cout << func("MUGICHA") << endl;
    //=> NO

    cout << func("OOLONGT") << endl;
    //=> YES

    cout << func("T") << endl;
    //=> YES

    cout << func("TEA") << endl;
    //=> NO
}

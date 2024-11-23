// https://atcoder.jp/contests/abc032/tasks/abc032_a

#include <iostream>
using namespace std;

string func(int n, string s) {
    if (n % 2 == 0) {
        return "No";
    }

    for (int i = 0; i < (n+1)/2-1; i++) {
        if (s[i] != '1') {
            return "No";
        }
    }

    if (s[(n+1)/2-1] != '/') {
        return "No";
    }

    for (int i = (n+1)/2; i < n; i++) {
        if (s[i] != '2') {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    cout << func(5, "11/22") << endl;
    //=> Yes

    cout << func(1, "/") << endl;
    //=> Yes

    cout << func(4, "1/22") << endl;
    //=> No

    cout << func(5, "22/11") << endl;
    //=> No
}

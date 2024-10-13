// https://atcoder.jp/contests/abc374/tasks/abc374_b

#include <iostream>
#include <algorithm>
using namespace std;

int func(string s, string t) {
    if (s == t) {
        return 0;
    }

    int n = min(s.size(), t.size());

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            return i+1;
        }
    }

    return n+1;
}

int main() {
    cout << func("abcde", "abedc") << endl;
    //=> 3

    cout << func("abcde", "abcdefg") << endl;
    //=> 6

    cout << func("keyence", "keyence") << endl;
    //=> 0
}

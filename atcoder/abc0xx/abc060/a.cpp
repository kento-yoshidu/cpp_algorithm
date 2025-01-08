// https://atcoder.jp/contests/abc060/tasks/abc060_a

#include <iostream>
using namespace std;

string func(string a, string b, string c) {
    if (a[a.size()-1] == b[0] && b[b.size()-1] == c[0]) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func("rng", "gorilla", "apple") << endl;
    //=> YES

    cout << func("yakiniku", "unagi", "sushi") << endl;
    //=> NO

    cout << func("a", "a", "a") << endl;
    //=> YES

    cout << func("aaaaaaaaab", "aaaaaaaaaa", "aaaaaaaaab") << endl;
    //=> NO
}

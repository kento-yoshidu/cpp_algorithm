// https://atcoder.jp/contests/abc372/tasks/abc372_a

#include <iostream>
using namespace std;

string func(string str) {
    string ans = "";

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '.') {
            ans += str[i];
        }
    }

    return ans;
}

int main() {
    cout << func(".v.") << endl;
    //=> v

    cout << func("chokudai") << endl;
    //=> chokudai

    cout << func("...") << endl;
    // =>
}

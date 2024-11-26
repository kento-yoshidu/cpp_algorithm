// https://atcoder.jp/contests/agc054/tasks/agc054_a

#include <iostream>
using namespace std;

int func(int n, string s) {
    if (s[0] != s[s.size()-1]) {
        return 1;
    }

    for (int i = 1; i < s.size()-1; i++) {
        if (s[0] != s[i] && s[0] != s[i+1]) {
            return 2;
        }
    }

    return -1;
}

int main() {
    cout << func(4, "abba") << endl;
    //=> 2

    cout << func(3, "aba") << endl;
    //=> -1
}

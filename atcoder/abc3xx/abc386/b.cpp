// https://atcoder.jp/contests/abc386/tasks/abc386_b

#include <iostream>
using namespace std;

int func(string s) {
    int ans = 0;
    int i = 0;

    while (i < s.size()) {
        if (s[i] == '0') {
            int tmp = 0;

            while (i < s.size() && s[i] == '0') {
                tmp++;
                i++;
            }

            ans += (tmp + 1) / 2;
        } else {
            ans++;
            i++;
        }
    }

    return ans;
}

int main() {
    cout << func("1000000007") << endl;
    //=> 6

    cout << func("998244353") << endl;
    //=> 9

    cout << func("32000") << endl;
    //=> 4
}

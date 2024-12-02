// https://atcoder.jp/contests/abc032/tasks/abc032_b

#include <iostream>
using namespace std;

string func(string s) {
    for (int i = 0; i < s.size()/2; i++) {
        if (s[i*2] != s[i*2+1]) {
            return "No";
        }
    }

    int cnt[26] = {};

    for (int i = 0; i < s.size(); i++) {
        cnt[s[i]-'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0 && cnt[i] != 2) {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    cout << func ("aabbcc") << endl;
    //=> Yes

    cout << func("aab") << endl;
    //=> No

    cout << func("zzzzzz") << endl;
    //=> No
}

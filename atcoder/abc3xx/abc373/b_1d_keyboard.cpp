// https://atcoder.jp/contests/abc373/tasks/abc373_b

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int func(string s) {
    vector<int> c(26);

    for (int i = 0; i < 26; i++) {
        c[s[i] - 'A'] = i;
    }

    int ans = 0;

    for (int i = 0; i < 25; i++) {
        ans += abs(c[i] - c[i+1]);
    }

    return ans;
}

int main() {
    cout << func("ABCDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
    //=> 25

    cout << func("MGJYIZDKSBHPVENFLQURTCWOAX") << endl;
    //=> 223
}

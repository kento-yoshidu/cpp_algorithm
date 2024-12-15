// https://atcoder.jp/contests/joi2021yo1a/tasks/joi2021_yo1a_b

#include <iostream>
#include <vector>
using namespace std;

string func(int n, string s) {
    vector<int> a (3, 0);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'J') {
            a[0]++;
        } else if (s[i] == 'O') {
            a[1]++;
        } else {
            a[2]++;
        }
    }

    string ans = "";

    ans.append(a[0], 'J');
    ans.append(a[1], 'O');
    ans.append(a[2], 'I');

    return ans;
}

int main() {
    cout << func(6, "JIOIJO") << endl;
    //=> JJOOII

    cout << func(4, "OOOI") << endl;
    //=> OOOI

    cout << func(10, "OIJJJIOIOI") << endl;
    //=> JJJOOOIIII
}

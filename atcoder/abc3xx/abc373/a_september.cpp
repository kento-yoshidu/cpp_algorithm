// https://atcoder.jp/contests/abc373/tasks/abc373_a

#include <iostream>
#include <string>
using namespace std;

int func(string s[12]) {
    int ans = 0;

    for (int i = 0; i < 12; i++) {
        if (i+1 == s[i].size()) {
            ans++;
        }
    }

    return ans;
}

int main() {
    string s1[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    cout << func(s1) << endl;
    //=> 1

    string s2[12] = {"ve", "inrtfa", "npccxva", "djiq", "lmbkktngaovl", "mlfiv", "fmbvcmuxuwggfq", "qgmtwxmb", "jii", "ts", "bfxrvs", "eqvy"};
    cout << func(s2) << endl;
    //=> 2
}

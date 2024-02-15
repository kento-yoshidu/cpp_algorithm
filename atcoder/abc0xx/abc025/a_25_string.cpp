// https://atcoder.jp/contests/abc025/tasks/abc025_a

#include <iostream>
#include <vector>
using namespace std;

string func(string s, int n) {
    vector<string> A;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            string t = s.substr(i, 1);
            t += s[j];
            A.push_back(t);
        }
    }

    return A[n-1];
}

int main() {
    cout << func("abcde", 8) << endl;
    //=> bc

    cout << func("aeiou", 22) << endl;
    //=> ue

    cout << func("vwxyz", 25) << endl;
    //=> zz
}

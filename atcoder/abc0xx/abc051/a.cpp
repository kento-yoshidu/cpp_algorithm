// https://atcoder.jp/contests/abc051/tasks/abc051_a

#include <iostream>
using namespace std;

string func(string s) {
    string ans = "";

    for (int i = 0; i < 19; i++) {
        if (i == 5 || i == 13) {
            ans += " ";
        } else {
            ans += s[i];
        }
    }

    return ans;
}

int main() {
    cout << func("happy,newyear,enjoy") << endl;
    //=> happy newyear enjoy

    cout << func("haiku,atcoder,tasks") << endl;
    //=> haiku atcoder tasks

    cout << func("abcde,fghihgf,edcba") << endl;
    //=> abcde fghihgf edcba
}

// https://atcoder.jp/contests/abc015/tasks/abc015_1

#include <iostream>
using namespace std;

string func(string a, string b) {
    if (a.length() > b.length()) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << func("isuruu", "isleapyear") << endl;
    //=> isleapyear

    cout << func("ttttiiiimmmmeeee", "time") << endl;
    //=> ttttiiiimmmmeeee
}

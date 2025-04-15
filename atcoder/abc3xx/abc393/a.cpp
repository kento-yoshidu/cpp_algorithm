// https://atcoder.jp/contests/abc393/tasks/abc393_a

#include <iostream>
using namespace std;

int func(string s1, string s2) {
    if (s1 == "sick" && s2 == "sick") {
        return 1;
    } else if (s1 == "fine" && s2 == "fine") {
        return 4;
    } else if (s1 == "sick") {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    cout << func("sick", "fine") << endl;
    //=> 2

    cout << func("fine", "fine") << endl;
    //=> 4
}

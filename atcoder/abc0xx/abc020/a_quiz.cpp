// https://atcoder.jp/contests/abc020/tasks/abc020_a

#include <iostream>
using namespace std;

string func(int q) {
    if (q == 1) {
        return "ABC";
    } else {
        return "chokudai";
    }
}

int main() {
    cout << func(1) << endl;
    //=> ABC

    cout << func(2) << endl;
    //=> chokudai
}

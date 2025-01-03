// https://atcoder.jp/contests/abc053/tasks/abc053_a

#include <iostream>
using namespace std;

string func(int x) {
    if (x < 1200) {
        return "ABC";
    } else {
        return "ARC";
    }
}

int main() {
    cout << func(1000) << endl;
    //=> ABC

    cout << func(2000) << endl;
    //=> ARC
}

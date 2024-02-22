// https://atcoder.jp/contests/abc030/tasks/abc030_a

#include <iostream>
using namespace std;

string func(int a, int b, int c, int d) {
    float x = float(b) / float(a);
    float y = float(d) / float(c);

    if (x > y) {
        return "TAKAHASHI";
    } else if (x < y) {
        return "AOKI";
    } else {
        return "DRAW";
    }
}

int main() {
    cout << func(5, 2, 6, 3) << endl;
    //=> AOKI

    cout << func(100, 80, 100, 73) << endl;
    //=> TAKAHASHI

    cout << func(66, 30, 55, 25) << endl;
    //=> DRAW
}

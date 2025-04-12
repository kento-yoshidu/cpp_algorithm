// https://atcoder.jp/contests/abc072/tasks/abc072_a

#include <iostream>
using namespace std;

int func(int x, int t) {
    if (x <= t) {
        return 0;
    } else {
        return x - t;
    }
}

int main() {
    cout << func(100, 17) << endl;
    //=> 83

    cout << func(48, 58) << endl;
    //=> 0

    cout << func(1000000000, 1000000000) << endl;
    //=> 0
}

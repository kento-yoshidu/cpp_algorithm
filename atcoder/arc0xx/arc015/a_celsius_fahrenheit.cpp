// https://atcoder.jp/contests/arc015/tasks/arc015_1

#include <iostream>
using namespace std;

float func(int n) {
    return 9.0 / 5.0 * n + 32.0;
}

int main() {
    cout << func(10) << endl;
    //=> 50

    cout << func(33) << endl;
    //=> 91.4

    cout << func(-100) << endl;
    //=> -148
}

// https://atcoder.jp/contests/abc024/tasks/abc024_a

#include <iostream>
using namespace std;

int func(int a, int b, int c, int k, int s, int t) {
    if (s + t >= k) {
        return a*s + b*t - (s+t)*c;
    } else {
        return a*s + b*t;
    }
}

int main() {
    cout << func(100, 200, 50, 20, 40, 10) << endl;
    //=> 3500

    cout << func(400, 1000, 400, 21, 10, 10) << endl;
    //=> 14000

    cout << func(400, 1000, 400, 20, 10, 10) << endl;
    //=> 6000
}

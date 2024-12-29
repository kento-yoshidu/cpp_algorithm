// https://atcoder.jp/contests/abc043/tasks/abc043_a

#include <iostream>
using namespace std;

int func(int n) {
    if (n == 1) {
        return n;
    } else {
        return func(n-1) + n;
    }
}

int main() {
    cout << func(3) << endl;
    //=> 6

    cout << func(10) << endl;
    //=> 55

    cout << func(1) << endl;
    //=> 1
}

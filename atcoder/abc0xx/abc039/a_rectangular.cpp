// https://atcoder.jp/contests/abc039/tasks/abc039_a

#include <iostream>
using namespace std;

int func(int a, int b, int c) {
    return (a*b + a*c + b*c) * 2;
}

int main() {
    cout << func(2, 3, 4) << endl;
    //=> 52

    cout << func(3, 4, 2) << endl;
    //=> 52

    cout << func(100, 100, 100) << endl;
    //=> 60000
}

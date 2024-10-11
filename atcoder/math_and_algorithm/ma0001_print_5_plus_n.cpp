// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a

#include <iostream>
using namespace std;

int func(int n) {
    return 5 + n;
}

int main() {
    cout << func(2) << endl;
    //=> 7

    cout << func(4) << endl;
    //=> 9

    cout << func(8) << endl;
    //=> 13
}

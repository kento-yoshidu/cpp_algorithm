// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_b

#include <iostream>
using namespace std;

int func(int a1, int a2, int a3) {
    return a1 + a2 + a3;
}

int main() {
    cout << func(10, 20, 50) << endl;
    //=> 80

    cout << func(1, 1, 1) << endl;
    //=> 3

    cout << func(100, 100, 100) << endl;
    //=> 300
}

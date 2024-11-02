// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_f

#include <iostream>
using namespace std;

int func(int n) {
    return 2 * n + 3;
}

int main() {
    cout << func(100) << endl;
    //=> 203

    cout << func(27) << endl;
    //=> 57
}

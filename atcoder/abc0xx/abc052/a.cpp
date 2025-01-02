// https://atcoder.jp/contests/abc052/tasks/abc052_a

#include <iostream>
#include <algorithm>
using namespace std;

int func(int a, int b, int c, int d) {
    return max(a*b, c*d);
}

int main() {
    cout << func(3, 5, 2, 7) << endl;
    //=> 15

    cout << func(100, 600, 200, 300) << endl;
    //=> 60000
}

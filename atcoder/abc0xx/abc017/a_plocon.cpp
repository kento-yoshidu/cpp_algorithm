// https://atcoder.jp/contests/abc017/tasks/abc017_1

#include <iostream>
using namespace std;

int func(int s1, int e1, int s2, int e2, int s3, int e3) {
    return (s1 * e1 + s2 * e2 + s3 * e3) / 10;
}

int main() {
    cout << func(50, 7, 40, 8, 30, 9) << endl;
    //=> 94

    cout << func(990, 10, 990, 10, 990, 10) << endl;
    //=> 2970
}

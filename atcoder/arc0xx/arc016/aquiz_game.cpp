// https://atcoder.jp/contests/arc016/tasks/arc016_1

#include <iostream>
using namespace std;

int func(int n, int m) {
    if (n == m) {
        return 1;
    } else {
        return n;
    }
}

int main() {
    cout << func(4, 4) << endl;
    //=> 1

    cout << func(2, 1) << endl;
    //=> 2
}

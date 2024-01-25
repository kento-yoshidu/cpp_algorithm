// https://atcoder.jp/contests/abc003/tasks/abc003_1

#include <iostream>
using namespace std;

int func(int n) {
    int ans = 0;

    for (int i=1; i <= n; i++) {
        ans += i * 10000;
    }

    return ans / n;
}

int main() {
    cout << func(6) << endl;
    // 35000

    cout << func(91) << endl;
    // 460000
}

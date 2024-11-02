// https://atcoder.jp/contests/abc378/tasks/abc378_a

#include <iostream>
using namespace std;

int func(int a1, int a2, int a3, int a4) {
    int a[4] = {};
    int vec[4] = {a1, a2, a3, a4};

    for (int i = 0; i < 4; i++) {
        a[vec[i]-1]++;
    }

    int ans = 0;

    for (int i = 0; i < 4; i++) {
        if (a[i] == 4) {
            ans += 2;
        } else if (a[i] > 1) {
            ans++;
        }
    }

    return ans;
}

int main() {
    cout << func(2, 1, 2, 1) << endl;
    //=> 2

    cout << func(4, 4, 4, 1) << endl;
    //=> 1

    cout << func(1, 2, 3, 4) << endl;
    //=> 0

    cout << func(1, 1, 1, 1) << endl;
    //=> 2
}

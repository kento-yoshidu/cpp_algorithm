// https://atcoder.jp/contests/abc379/tasks/abc379_b

#include <iostream>
using namespace std;

int func(int n, int k, string s) {
    int ans = 0;

    for (int i = 0; i <= n-k; i++) {
        bool flag = true;

        for (int j = 0; j < k; j++) {
            if (s[i+j] != 'O') {
                flag = false;
            }
        }

        if (flag) {
            ans++;

            for (int j = 0; j < k; j++) {
                s[i+j] = 'X';
            }
        }
    }

    return ans;
}

int main() {
    cout << func(7, 3, "OOXOOOO") << endl;
    //=> 1

    cout << func(12, 2, "OXXOOOXOOOOX") << endl;
    //=> 3

    cout << func(22, 5, "XXOOOOOOOOXXOOOOOXXXXX") << endl;
    //=> 2
}

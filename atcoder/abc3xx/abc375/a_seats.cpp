// https://atcoder.jp/contests/abc375/tasks/abc375_a

#include <iostream>
using namespace std;

int func(int n, string s) {
    int ans = 0;

    for (int i = 0; i < n-2; i++) {
        if (s[i] == '#' && s[i+1] == '.' && s[i+2] == '#') {
            ans++;
        }
    }

    return ans;
}

int main() {
    cout << func(6, "#.##.#") << endl;
    //=> 2

    cout << func(1, "#") << endl;
    //=> 0

    cout << func(9, "##.#.#.##") << endl;
    //=> 3
}

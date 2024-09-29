// https://atcoder.jp/contests/joi2024yo1b/tasks/joi2024_yo1b_c

#include <iostream>
#include <string>
using namespace std;

int func(int n, string s) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'i' || s[i] == 'j') {
            ans += 2;
        } else {
            ans++;
        }
    }

    return ans;
}

int main() {
    cout << func(6, "jjooii") << endl;
    //=> 10

    cout << func(1, "i") << endl;
    //=> 2

    cout << func(13, "joiojiioijoio") << endl;
    //=> 21
}

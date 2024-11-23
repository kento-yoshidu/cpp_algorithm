// https://atcoder.jp/contests/abc381/tasks/abc381_c

#include <iostream>
using namespace std;

int func(int n, string s) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int temp = 0;

        if (s[i] == '/') {
            while (temp <= i && i+temp < n)
            {
                if (s[i-(temp+1)] == '1' && s[i+temp+1] == '2') {
                    temp += 1;
                } else {
                    break;
                }
            }
        }

        ans = max(ans, temp);
    }

    return ans * 2 + 1;
}

int main() {
    cout << func(8, "211/2212") << endl;
    //=> 5

    cout << func(5, "22/11") << endl;
    //=> 1

    cout << func(22, "/1211/2///2111/2222/11") << endl;
    //=> 7
}

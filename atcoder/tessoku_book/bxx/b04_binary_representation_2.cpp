// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cc

#include <iostream>
using namespace std;

int func(string str) {
    int ans = 0;
    int len = str.size();

    for (int i = 0; i < len; i++) {
        if (str[i] == '1') {
            ans += 1 << (len-i-1);
        }
    }

    return ans;
}

int main() {
    cout << func("1101") << endl;
    //=> 13

    cout << func("1") << endl;
    //=> 1

    cout << func("100101") << endl;
    //=> 37

    cout << func("10000000") << endl;
    //=> 128

    return 0;
}

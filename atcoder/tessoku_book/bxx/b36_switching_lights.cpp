// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_di

#include <iostream>
using namespace std;

string func(int n, int k, string s) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count++;
        }
    }

    if ((count - k) % 2 == 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(7, 3, "1010111") << endl;
    //=> Yes

    cout << func(10, 6, "0001010001") << endl;
    //=> No

    cout << func(2, 2, "11") << endl;
    //=> No
}

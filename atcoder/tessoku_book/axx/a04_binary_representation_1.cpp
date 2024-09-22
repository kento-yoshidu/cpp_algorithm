// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_d

#include <iostream>
#include <string>
using namespace std;

string func(int n) {
    string ans = "";

    for (int i = 9; i >= 0; i--) {
        int num = 1 << i;

        ans += to_string((n / num) % 2);
    }

    return ans;
}

int main() {
    cout << func(13) << endl;
    //=> 0000001101

    cout << func(37) << endl;
    //=> 0000100101

    cout << func(1000) << endl;
    //=> 1111101000
}

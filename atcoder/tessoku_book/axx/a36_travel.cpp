// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_aj

#include <iostream>
using namespace std;

string func(int n, int k) {
    if (k >= 2*n - 2 && k % 2 == 0) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    cout << func(5, 10) << endl;
    //=> Yes

    cout << func(5, 9) << endl;
    //=> No

    cout << func(5, 7) << endl;
    //=> No
}

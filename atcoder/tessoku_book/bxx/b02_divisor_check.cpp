// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ca

#include <iostream>
using namespace std;

string func(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (100 % i == 0) {
            return "Yes";
        }
    }

    return "No";
}

int main() {
    cout << func(5, 20) << endl;
    //=> Yes

    cout << func(6, 9) << endl;
    //=> No
}

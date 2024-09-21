// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cb

#include <iostream>
using namespace std;

string func(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (a[i] + a[j] + a[k] == 1000) {
                    return "Yes";
                }
            }
        }
    }

    return "No";
}

int main() {
    int a1[5] = {100, 250, 350, 400, 600};
    cout << func(5, a1) << endl;
    //=> Yes

    int a2[10] = {50, 150, 250, 350, 450, 550, 650, 750, 850, 950};
    cout << func(10, a2) << endl;
    //=> No

    return 0;
}

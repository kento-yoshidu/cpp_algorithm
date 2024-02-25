// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_b

#include <iostream>
using namespace std;

string func(int n, int x, int* a) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return "Yes";
        }
    }

    return "No";
}

int main() {
    int arr1[5] = {10, 20, 30, 40, 50};
    cout << func(5, 40, arr1) << endl;
    //=> Yes

    int arr2[6] = {30, 10, 40, 10, 50, 90};
    cout << func(6, 28, arr2)<< endl;
    //=> No
}

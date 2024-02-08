// https://atcoder.jp/contests/abc019/tasks/abc019_1

#include <iostream>
#include <algorithm>
using namespace std;

int func(int a, int b, int c) {
    int arr[3] = {a, b, c};
    sort(arr, arr + 3, greater<int>());

    return arr[1];
}

int main() {
    cout << func(2, 3, 4) << endl;
    //=> 3

    cout << func(5, 100, 5) << endl;
    //=> 5

    cout << func(3, 3, 3) << endl;
    //=> 3

    cout << func(3, 3, 4) << endl;
    //=> 3
}

// https://atcoder.jp/contests/abc042/tasks/abc042_a

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

string func(int a, int b , int c) {
    array<int, 3> arr = {a, b, c};

    sort(arr.begin(), arr.end());

    if (arr[0] == 5 && arr[1] == 5 && arr[2] == 7) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    cout << func(5, 5, 7) << endl;
    //=> YES

    cout << func(7, 7, 5) << endl;
    //=> NO
}

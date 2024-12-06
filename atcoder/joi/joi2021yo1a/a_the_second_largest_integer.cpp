// https://atcoder.jp/contests/joi2021yo1a/tasks/joi2021_yo1a_a

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(int a, int b, int c) {
    vector<int> v = {a, b, c};

    std::sort(v.begin(), v.end());

    return v[1];
}

int main() {
    cout << func(7, 5, 3) << endl;
    //=> 5

    cout << func(1, 3, 3) << endl;
    //=> 3

    cout << func(100, 100, 100) << endl;
    //=> 100

    cout << func(29, 83, 1) << endl;
    //=> 29
}

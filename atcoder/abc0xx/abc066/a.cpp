// https://atcoder.jp/contests/abc066/tasks/abc066_a

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(int a, int b, int c) {
    vector<int> vec = {a, b, c};

    sort(vec.begin(), vec.end());

    return vec[0] + vec[1];
}

int main() {
    cout << func(700, 600, 780) << endl;
    //=> 1300

    cout << func(10000, 10000, 10000) << endl;
    //=> 20000

    cout << func(3, 2, 1) << endl;
    //=> 3
}

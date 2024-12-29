// https://atcoder.jp/contests/abc046/tasks/abc046_a

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int func(int a, int b, int c) {
    set<int> vec = {a, b, c};

    return vec.size();
}

int main() {
    cout << func(3, 1, 4) << endl;
    //=> 3

    cout << func(3, 3, 33) << endl;
    //=> 2
}

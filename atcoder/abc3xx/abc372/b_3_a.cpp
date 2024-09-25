// https://atcoder.jp/contests/abc372/tasks/abc372_b

#include <iostream>
#include <vector>
#include <cmath>
#include <tuple>
using namespace std;

tuple<int, vector<int>> func(int m) {
    vector<int> a;

    for (int i = 10; i >= 0; i--) {
        int num = std::pow(3, i);

        while (num <= m) {
            if (num <= m) {
                m -= num;
            }

            a.push_back(i);
        }
    }

    return make_tuple(a.size(), a);
}

int main() {
    func(6);
    //=> 2
    //=> 1 1

    func(100);
    //=> 4
    //=> 4 2 2 0

    func(59048);
    //=> 10
    //=> 9 9 8 8 7 7 6 6 5 5 4 4 3 3 2 2 1 1 0 0
}

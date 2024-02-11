// https://atcoder.jp/contests/abc021/tasks/abc021_a

#include <iostream>
#include <vector>
using namespace std;

vector<int> func(int n) {
    vector<int> S;

    S.push_back(n);

    while (n--)
    {
        S.push_back(1);
    }

    return S;
}

int main() {
    vector<int> ans = func(10);

    for (auto item: ans) {
        cout << item << endl;
        /*
            10
            1
            1
            1
            1
            1
            1
            1
            1
            1
            1
        */
    }
}

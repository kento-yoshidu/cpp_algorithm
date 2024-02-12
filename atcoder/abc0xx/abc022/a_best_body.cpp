// https://atcoder.jp/contests/abc022/tasks/abc022_a

#include <iostream>
#include <vector>

using namespace std;

int func(int n, int s, int t, int w, vector<int> a) {
    int ans = 0;
    int current = w;

    if(w >= s && w <= t)ans++;

    for (auto num: a) {
        if (s <= current && current <= t) {
            ans++;
        }

        current += num;
    }

    if (s <= current && current <= t) {
        ans++;
    }

    return ans;
}

int main() {
    cout << func(5, 60, 70, 50, vector<int>{10, 10, 10, 10}) << endl;
    //=> 2

    cout << func(5, 50, 100, 120, vector<int>{-10, -20, -30, 70}) << endl;
    //=> 2
}

// https://atcoder.jp/contests/joi2024yo1a/tasks/joi2024_yo1a_d

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> func(int n, int a[]) {
    vector<int> arr(10, 0);

    for (int i = 0; i < n; i++) {
        arr[a[i]]++;
    }

    vector<int> ans;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            ans.push_back(i);
        }
    }

    return ans;
}

int main() {
    int a1[8] = {0, 2, 3, 0, 9, 1, 6};
    func(8, a1);
    //=> {0, 1, 2, 3, 6, 9}

    int a2[3] = {9, 9, 9};
    func(3, a2);
    //=> 9

    int a3[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    func(10, a3);
    //=> 1, 2, 3, 4, 5, 6, 9
}

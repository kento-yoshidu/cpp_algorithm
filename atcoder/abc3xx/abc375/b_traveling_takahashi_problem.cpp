// https://atcoder.jp/contests/abc375/tasks/abc375_b

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double func(int n, const std::vector<std::pair<int, int>>& xy) {
    double ans = 0.0;
    std::pair<int, int> pos = {0, 0};

    for (const auto& p : xy) {
        double x = p.first;
        double y = p.second;

        ans += std::sqrt(pow(x - pos.first, 2) + pow(y - pos.second, 2));

        pos.first = x;
        pos.second = y;
    }

    ans += std::sqrt(pow(0 - pos.first, 2) + pow(0 - pos.second, 2));

    return ans;
}

int main() {
    std::vector<std::pair<int, int>> vec1 = {{1, 2}, {-1, 0}};
    cout << func(2, vec1) << endl;
    //=> 6.0645

    std::vector<std::pair<int, int>> vec2 = {{-14142, 13562}, {-17320, 50807}, {-22360, 67977}, {24494, 89742}, {-26457, 51311}, {28284, 27124}, {31622, 77660}};
    cout << func(7, vec2) << endl;
    //=> 
}

// https://atcoder.jp/contests/abc012/tasks/abc012_1

#include <iostream>
#include <tuple>
using namespace std;

std::tuple<int, int> func(int a, int b) {
    return { b, a };
}

int main() {
    int result_a, result_b;
    std::tie(result_b, result_a) = func(1, 2);
    cout << result_a << " " << result_b << endl;
    // 1 2

    int result_c, result_d;
    std::tie(result_c, result_d) = func(5, 5);
    cout << result_c << " " << result_d << endl;
    // 5 5

    return 0;
}

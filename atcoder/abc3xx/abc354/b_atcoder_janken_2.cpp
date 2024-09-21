// https://atcoder.jp/contests/abc354/tasks/abc354_b

#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

string func(int n, const std::vector<std::tuple<string, int>>& sc) {
    vector<string> s(n);
    vector<int> c(n);

    for (const auto& [text, number] : sc) {
        s.push_back(text);
        c.push_back(number);
    }

    return "Yes";
}


int main() {
    std::vector<std::tuple<std::string, int>> data = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };

    cout << func(3, data) << endl;
}

// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_eh

#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

int func(int n, int m, const std::vector<std::tuple<int, int>>& ab) {
    std::vector<std::vector<int>> graph;

    for (const auto& edge : ab) {
        int u, v;
        std::tie(u, v) = edge;

        graph[u].push_back(v);
        graph[v].push_back(u);

        cout << u << v << endl;
    }

    // グラフの内容を確認するために出力
    for (int i = 1; i <= m; ++i) {
        std::cout << "Node " << i << ": ";
        for (int neighbor : graph[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }


    return 1;
}

int main() {
    std::vector<std::tuple<int, int>> ab = {
        std::make_tuple(1, 2),
        std::make_tuple(2, 3),
        std::make_tuple(3, 4),
        std::make_tuple(3, 5),
    };

    cout << func(5, 4, ab) << endl;
}

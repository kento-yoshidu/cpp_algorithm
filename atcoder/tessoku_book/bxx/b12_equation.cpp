// https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ck

#include <iostream>
using namespace std;

double calc(double x) {
    return x * x * x + x;
}

double func(int n) {
    double l = 0.0;
    double r = double(n);
    double mid;

    for (int i = 0; i < 20; i++) {
        mid = (l + r) / 2.0;

        double val = calc(mid);

        if (n < val) {
            r = mid;
        } else {
            l = mid;
        }
    }

    return mid;
}

int main() {
    cout << func(2) << endl;
    //=> 1
}

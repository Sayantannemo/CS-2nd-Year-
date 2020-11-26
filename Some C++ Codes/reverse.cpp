#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int x = 0;

    while (n != 0) {
        int buff = n % 10;
        x = (x * 10) + buff;
        n /= 10;
    }

    cout << "Reverse Number:\n" << x;

    return 0;
}
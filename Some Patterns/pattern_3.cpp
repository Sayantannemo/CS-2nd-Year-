#include <iostream>
using namespace std;

// #inverted_pyramid

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) cout << "* ";
        cout << endl;
    }

    return 0;
}
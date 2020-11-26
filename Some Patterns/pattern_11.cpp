#include <iostream>
using namespace std;

// #nuber_pattern

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x = 1;
        for (int j = n; j > i; j--) cout << " ";
        for (int j = 1; j <= i; j++) cout << x++ << " ";
        cout << endl;
    }

    return 0;
}
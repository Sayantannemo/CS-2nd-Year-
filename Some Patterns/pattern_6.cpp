#include <iostream>
using namespace std;

// floyd's_triangle

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int x = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << x++ << " ";
        cout << endl;
    }

    return 0;
}
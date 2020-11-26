#include <iostream>
using namespace std;

// palindromic_pattern

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x = i;
        for (int j = n; j > i; j--) cout << "  ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j < i)
                cout << x-- << " ";
            else
                cout << x++ << " ";
        }
        cout << endl;
    }

    return 0;
}
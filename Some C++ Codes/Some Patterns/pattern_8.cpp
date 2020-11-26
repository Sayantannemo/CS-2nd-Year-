#include <iostream>
using namespace std;

// inverted_pattern_of_numbers

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        int x = 1;
        for (int j = i; j >= 1; j--) cout << x++ << " ";
        cout << endl;
    }

    return 0;
}
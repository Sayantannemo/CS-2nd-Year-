#include <iostream>
using namespace std;

int fact(int n) {
    int facto = 1;
    for (int i = n; i >= 1; i--) facto *= i;
    return facto;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        cout << endl;
    }

    return 0;
}
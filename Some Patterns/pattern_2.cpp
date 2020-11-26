#include <iostream>
using namespace std;

// #apna_college #hollow_rectangle

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (int i = 1; i <= n; i++) cout << "* ";
            cout << endl;
        } else {
            cout << "* ";
            for (int i = 2; i < n; i++) cout << "  ";
            cout << "*\n";
        }
    }

    return 0;
}
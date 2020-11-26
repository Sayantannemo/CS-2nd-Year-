#include <iostream>
using namespace std;

void fib(int n) {
    int a = 0;
    int b = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++) {
        cout << a << endl;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    fib(n);

    return 0;
}
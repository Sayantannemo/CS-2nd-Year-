#include <cmath>
#include <iostream>
using namespace std;

// bool isprime(int);

bool isprime(int n) {
    if (n == 1) return false;  // corner case

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n1, n2;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++) {
        if (isprime(i)) cout << i << " ";
    }

    return 0;
}

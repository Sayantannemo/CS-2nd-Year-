#include <cmath>
#include <iostream>
using namespace std;

bool checkTriplet(int a, int b, int c) {
    int x = max(a, max(b, c));
    int y, z;

    if (x == a) {
        y = b;
        z = c;
    } else if (x == b) {
        y = a;
        z = c;
    } else {
        y = a;
        z = b;
    }

    return (x * x) == ((y * y) + (z * z));
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (checkTriplet(s1, s2, s3))
        cout << "It's a pythagorean Triplet!";
    else
        cout << "It's not a pythagorean Triplet!";

    return 0;
}
#include <cmath>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int buff = n;
    int num = 0;

    while (n != 0) {
        int rev = n % 10;
        num += pow(rev, 3);
        n /= 10;
    }

    if (num == buff)
        cout << "Armstrong number!";
    else
        cout << "Not an armstrong number!";

    return 0;
}
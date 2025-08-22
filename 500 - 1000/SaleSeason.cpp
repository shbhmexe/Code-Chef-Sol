//Question 34
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, discount = 0;
        cin >> X;

        if (X > 5000) discount = 500;
        else if (X > 1000) discount = 100;
        else if (X > 100) discount = 25;

        cout << X - discount << "\n";
    }
    return 0;
}

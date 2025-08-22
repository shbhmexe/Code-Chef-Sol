//Question 37
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int totalSlices = N * X;
        int pizzas = (totalSlices + 3) / 4; // Ceiling division
        cout << pizzas << "\n";
    }
    return 0;
}

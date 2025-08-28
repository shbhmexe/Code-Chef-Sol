//Question 45
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int remaining = max(0, N - X);
        int packets = (remaining + 3) / 4;
        cout << packets << "\n";
    }
    return 0;
}

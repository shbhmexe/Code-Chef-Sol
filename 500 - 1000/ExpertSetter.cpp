//Question 41
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T; while (T--) {
        long long X, Y;
        cin >> X >> Y;
        if (Y * 2 >= X)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

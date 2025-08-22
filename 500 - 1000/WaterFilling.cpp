//Question 32
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        int cntEmpty = (b1 == 0) + (b2 == 0) + (b3 == 0);

        if (cntEmpty >= 2)
            cout << "Water filling time\n";
        else
            cout << "Not now\n";
    }
    return 0;
}

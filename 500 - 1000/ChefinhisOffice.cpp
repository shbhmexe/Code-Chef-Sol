//Question 21
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int total = 4 * X + Y;
        cout << total << endl;
    }
    return 0;
}

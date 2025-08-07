//Question 26
#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int weapon;
        cin >> weapon;
        if (weapon % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even > odd)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";
    return 0;
}

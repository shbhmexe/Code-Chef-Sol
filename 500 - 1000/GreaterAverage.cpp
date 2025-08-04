//Question 13
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (((double)a + b) / 2 > c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
// Time Complexity: O(t)
// Space Complexity: O(1)
// This code checks if the average of two numbers a and b is greater than a third number c.
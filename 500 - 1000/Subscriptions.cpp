//Question 14
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int subscriptions = n / 6;
        if (n % 6) {
            subscriptions++;
        }
        cout << subscriptions * x << endl;
    }
}

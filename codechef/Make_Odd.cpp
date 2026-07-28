#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int onesA = 0, onesB = 0;
        for (int i = 0; i < n; i++) {
            onesA += (a[i] == '1');
            onesB += (b[i] == '1');
        }

        // Check if the difference in the number of 1s is odd
        if ((onesA - onesB) % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
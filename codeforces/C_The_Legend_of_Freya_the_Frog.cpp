#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        int moves = 0;
        bool facingX = true;

        while (x > 0 || y > 0) {
            int jump = min(k, facingX ? x : y);
            x -= jump;
            y -= jump;
            moves++;
            facingX = !facingX;
        }

        cout << moves << endl;
    }

    return 0;
}
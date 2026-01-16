#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long sumA = 0, sumB = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sumA += a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            sumB += b[i];
        }
        
        // If the sum of a[] and b[] is not equal, it's impossible
        if (sumA != sumB) {
            cout << "YES" << endl;
            return 0;
        }
        
        long long totalGain = 0, totalLoss = 0;
        
        // Calculate the total gain and loss needed
        for (int i = 0; i < n; ++i) {
            if (b[i] > a[i]) {
                totalGain += b[i] - a[i];
            } else if (a[i] > b[i]) {
                totalLoss += a[i] - b[i];
            }
        }
        
        if (totalGain == totalLoss) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

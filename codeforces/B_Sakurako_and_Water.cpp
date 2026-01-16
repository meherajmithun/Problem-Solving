#include <iostream>
#include <vector>
using namespace std;

// Function to process a single test case
int processTestCase(int n, vector<vector<int>>& a) {
    int magicCount = 0;

    // Start from the bottom-right diagonal and work upwards
    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            // Process diagonals by looking at the main diagonal element
            if (i == j && a[i][j] < 0) {
                int increment = -a[i][j];  // Find how much to increase
                magicCount += increment;   // Count the magic operation
                
                // Apply the magic to all diagonal elements in the submatrix
                for (int k = 0; k <= i && k <= j; ++k) {
                    a[i - k][j - k] += increment;
                }
            }
        }
    }

    return magicCount;
}

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;  // Matrix size

        vector<vector<int>> a(n, vector<int>(n));

        // Input the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        // Process the matrix and get the result for this test case
        int result = processTestCase(n, a);
        cout << result << endl;
    }

    return 0;
}

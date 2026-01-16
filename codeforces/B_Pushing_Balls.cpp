#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        vector<int> rowCount(n, 0);
        vector<int> colCount(m, 0);
        
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    if (rowCount[i] < j + 1 && colCount[j] < i + 1) {
                        possible = false;
                        break;
                    }
                }
            }
            if (!possible) break;
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}

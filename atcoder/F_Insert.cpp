#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> ans(n);
    for (int i = n; i >= 1; --i) {
        int pos = p[i - 1] - 1;
        for (int j = n - 1; j > pos; --j) {  // Shift elements to the right
            ans[j] = ans[j - 1];
        }
        ans[pos] = i; // Insert the number
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
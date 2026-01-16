#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getStreakValue(vector<int> &A) {
    int maxStreak = 1, currentStreak = 1;
    for (int i = 1; i < A.size(); i++) {
        if (A[i] >= A[i - 1])
            currentStreak++;
        else
            currentStreak = 1;
        maxStreak = max(maxStreak, currentStreak);
    }
    return maxStreak;
}

void solve() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    
    int maxStreak = getStreakValue(A);
    
    for (int i = 0; i < N; i++) {
        vector<int> modifiedA = A;
        modifiedA[i] *= X;
        maxStreak = max(maxStreak, getStreakValue(modifiedA));
    }
    
    cout << maxStreak << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

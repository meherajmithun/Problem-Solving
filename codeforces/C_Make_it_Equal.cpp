#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> S(n), T(n);
        for (int i = 0; i < n; i++) cin >> S[i];
        for (int i = 0; i < n; i++) cin >> T[i];

        if (k == 0) {
            // k=0 হলে S আর T ঠিক একই হতে হবে
            sort(S.begin(), S.end());
            sort(T.begin(), T.end());
            cout << (S == T ? "YES\n" : "NO\n");
            continue;
        }

        vector<long long> modS(n), modT(n);
        for (int i = 0; i < n; i++) modS[i] = S[i] % k;
        for (int i = 0; i < n; i++) modT[i] = T[i] % k;

        sort(modS.begin(), modS.end());
        sort(modT.begin(), modT.end());

        if (modS != modT) {
            cout << "NO\n";
            continue;
        }

        // এখন চেক করতে হবে বড় থেকে ছোটে সঠিকভাবে ট্রান্সফার করা যায় কি না
        sort(S.begin(), S.end());
        sort(T.begin(), T.end());

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (T[i] < S[i]) { // কারণ কেবল k যোগ করে বড় করা যায় বা |x-k| করে ছোট করা যায় কিন্তু residue fixed
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}

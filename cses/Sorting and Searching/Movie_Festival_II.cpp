// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout << x << '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vp(n);
    for (auto &[a, b] : vp)
        cin >> a >> b;
    sort(all(vp));
    multiset<int> ms;
    int i = 0;
    int t = k;
    while (k--)
    {
        ms.insert(vp[i].second);
        i++;
    }

    int ans = 0;
    for (i = t; i < n; i++)
    {
        int a = vp[i].first;
        int b = vp[i].second;

        int x = *(ms.begin());
        if (x <= a)
        {
            ans++;
            ms.erase(ms.begin());
            ms.insert(b);
        }
        else
        {
            x = *(ms.rbegin());
            // cout<<x<<nl;
            if (x > b)
            {
                ms.erase(ms.find(x));
                ms.insert(b);
            }
        }
    }
    cout << ans + sz(ms) << nl;
}

int32_t main()
{
    fast int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
}
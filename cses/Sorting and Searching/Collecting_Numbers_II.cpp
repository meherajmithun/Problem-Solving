//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define print(x) cout << x << '\n'
#define mod 1000000007
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

void solve()
{
    int n, query;
    cin >> n >> query;
    vector<int> v(n + 1);
    vector<int> freq(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        freq[v[i]] = i;
    }

    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        ans += (freq[i] > freq[i + 1]);
    }
    while (query--)
    {
        int l, r;
        cin >> l >> r;
        set<pair<int, int>> st;
        if (v[l] + 1 <= n)
        {
            st.insert({v[l], v[l] + 1});
        }
        if (v[l] - 1 >= 1)
        {
            st.insert({v[l] - 1, v[l]});
        }

        if (v[r] + 1 <= n)
        {
            st.insert({v[r], v[r] + 1});
        }
        if (v[r] - 1 >= 1)
        {
            st.insert({v[r] - 1, v[r]});
        }

        for (auto [u, v] : st)
        {
            ans -= freq[u] > freq[v];
        }

        swap(v[l], v[r]);
        freq[v[l]] = l;
        freq[v[r]] = r;

        for (auto [u, v] : st)
        {
            ans += freq[u] > freq[v];
        }

        print(ans);
        st.clear();
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
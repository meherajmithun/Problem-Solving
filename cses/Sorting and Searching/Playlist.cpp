#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    map<int, int> mp;
    int l = 0, r = 0, tmp = r;
    int mx = INT_MIN;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 2)
        {
            while (l < r and mp[v[r]] == 2)
            {
                mp[v[l]]--;
                l++;
            }
        }
        /// r++;
        mx = max(mx, (r - l + 1));
        r++;
    }
    cout << mx << endl;
}
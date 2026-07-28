#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int q;
    cin >> q;

    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    vector<int> ans;
    // a.push_back(INT_MAX);
    for (int i = n-1; i>=0; i--)
    {
       if(i<n-1 and a[i]<a[i+1]){
        a[i] = max(a[i+1],max(a[i],b[i]));
       }
       if(a[i]<b[i]){
        a[i] = max(a[i],b[i]);
       }
    }


    vector<ll> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout<<(pre[r]-pre[l-1])<<" ";
    }
    // for(auto i : a) cout<<i<<" ";
    cout << endl;
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
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
    int n;
    cin >> n;
    int hao = n / 3;
    int baki = (n % 3);
    int a = hao, b = hao, c =n-(a+b);
    while(c>2){
        a = c/3, b=c/3; c = c-(a+b);
        hao += a;
    }
    cout << hao << nl;
}

int32_t main()
{
    fast int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
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
    if (n % 3 == 0)
    {
        cout << "0\n";
        return;
    }
    int a;
    int k = n / 3;
    k++;
    cout << k * 3 - n << endl;
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
//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(v) v.begin(), v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
const int mx = 1e6 + 1;
int cnt[mx];

int32_t main()
{
    slow;
    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j += i)
        {
            cnt[j]++;
        }
    }
    int n;
    cin >> n;
    while (n--)
    {
        int kahini;
        cin >> kahini;
        cout << cnt[kahini] << endl;
    }
}
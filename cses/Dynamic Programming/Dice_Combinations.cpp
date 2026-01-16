#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[1000006];

int call(int n)
{
    int cnt = 0;
    if (n == 0)
        return 1;
    if (dp[n] != 0)
        return dp[n];
    for (int i = 1; i <= 6; i++)
    {
        if (i <= n)
        {
            int k = call(n - i);
            cnt += k;
            cnt %= mod;
            dp[n] = cnt;
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    cout << call(n);
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = (int)s.size();
    map<char, int> mp;
    int mx = 1, r = 0, l = 0;
    while (r < n)
    {
        mp[s[r]]++;
        while (s[r] == s[r + 1] and r < n)
        {
            mp[s[r]]++;
            r++;
        }
        mx = max(mx, mp[s[r]]);
        mp.erase(s[r]);
        r++;
    }
    cout << mx << endl;
}
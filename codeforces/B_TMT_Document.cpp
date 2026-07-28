/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Business and Technology
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"

bool solve(string s)
{
	int m=0,t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='M')
			m++;
		else
				t++;
		if(m>t)
			return false;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int M=0,T=0;
		for(int i=0;i<s.size();i++)
        {
            if(s[i]=='T')T++;
            else M++;
        }
        if(2*M != T)cout<<"NO"<<endl;
        else
        {
            if(solve(s)==true)
            {
                reverse(s.begin(),s.end());
                if(solve(s)==true)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
	}
	return 0;
}

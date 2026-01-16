#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(x) cout << x << '\n' 

int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        int n= (int)s.size();
        int mn = INT_MAX;
        map<char,int>mp;
        bool f = true;
        int l = 0 , r = 0;
        while(r < n){
            mp[s[r]]++;
            if(mp.size() == 3){
                while( l < r and mp.size() == 3){
                    mp[s[l]]--;
                    if(mp[s[l]] == 0){
                        mp.erase(s[l]);
                        mn = min(mn,r-l+1);
                        f = false;
                    }
                    l++;
                }
            }
            r++;
        }
        if(f){
            mn = 0;
        }
        print(mn);
    }
}
#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<< x << '\n'

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void solve(){
    string s; cin >> s;
    int n = (int)s.size();

    map<char,int>mp;

    int l=0,r=0;
    int Minimum_length = INT_MAX;
    bool paisi = true;
    while(r < n){
        mp[s[r]]++;
        if(mp.size() == 3){
            while(l < r and mp.size() == 3){
                paisi = false;
                Minimum_length = min(Minimum_length , (r-l+1));
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
    if(paisi){
        print(0);
        return;
    }
    print(Minimum_length);
}

int main(){
    slow();
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}

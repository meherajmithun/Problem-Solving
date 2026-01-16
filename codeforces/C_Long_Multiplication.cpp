#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    string s,s2;
    cin>>s>>s2;
    int n = s.size();
    int ans,ans2;
    bool aiche = 1;
    for(int i=0; i<n; i++){
        if(s[i]>s2[i] and aiche){
            swap(s[i],s2[i]);
            aiche = 0;
            continue;
        }
        if(!aiche){
            if(s[i]<s2[i]){
                swap(s[i],s2[i]);
            }
        }
    }
    aiche = 1;
    for(int i=0; i<n; i++){
        if(s[i]<s2[i] and aiche){
            swap(s[i],s2[i]);
            aiche = 0;
            continue;
        }
        if(!aiche){
            if(s[i]>s2[i]){
                swap(s[i],s2[i]);
            }
        }
    }
    
    //cout<<s<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
    //cout<<max(s,s3)<<endl<<max(s2,s4)<<endl;

    cout<<s<<endl<<s2<<endl;

}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}
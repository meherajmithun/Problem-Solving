#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<char>ans;
        int i=0;
        for(; i<=n-2; i++){
            if(s[i]=='b' or s[i]=='c' or s[i]=='d'){
                if(i<n-1 and s[i+1]=='a' or s[i+1]=='e'){
                    if(i<n-2 and (s[i+2]=='c' or s[i+2]=='b' or s[i+2]=='d') and (s[i+3]=='c' or s[i+3]=='b' or s[i+3]=='d')){
                        ans.push_back(s[i]);
                        ans.push_back(s[i+1]);
                        ans.push_back(s[i+2]);
                        ans.push_back('.'); i+=2;
                    }
                    else{
                        // cout<<s[i]<<s[i+1]<<endl;
                        ans.push_back(s[i]);
                        ans.push_back(s[i+1]);
                        ans.push_back('.'); i+=1;
                    }
                }
            }
            else ans.push_back(s[i]);
        }
        ans.pop_back();
        if(i==n-1)ans.push_back(s[n-1]);
        for(auto c : ans) cout<<c; cout<<'\n';
    }
}
// ba.ced.bab
// ba.ba
// dad.de.ca.bed.dad
// dac
// dac.dac
// da.bab.ba.ba.bab.bab.ba.bab.ba

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        string s,p; cin>>s>>p;
        vector<int>s1,s2;
        int n = (int)s.size();
        int m = (int)p.size();
        //if(n == 1 or m == 1){
            if(s[0] != p[0]){
                cout<<"NO\n";
                continue;
            }
        
        if(m>(n*2) or m<n){
            cout<<"NO\n";
            continue;
        }

        int a = 1;
        for(int i=1; i<n; i++){
            if(s[i-1] == s[i]){
                a++;
            }
            else{
                s1.push_back(a);
                a = 1;
            }
        }
        s1.push_back(a);
        a  = 1;
        for(int i=1; i<m; i++){
            if(p[i-1] == p[i]){
                a++;
            }
            else{
                s2.push_back(a);
                a = 1;
            }
        }
        s2.push_back(a);

        if(s1.size() != s2.size()){
            cout<<"NO\n";
            continue;
        }
        bool f = 0;
        for(int i=0; i<s1.size(); i++){
            int k = s1[i];
            int l = s2[i];
            if(k>l or l>(k*2)){
                f = 1;
                break;
            }
        }
        if(!f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

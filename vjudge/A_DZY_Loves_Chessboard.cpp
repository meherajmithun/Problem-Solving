#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m; 
    vector<string>v;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        v.push_back(s);
    }
    string ans;
    vector<string>res;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j] == '.'){
                if((i+j) % 2 != 0) ans.push_back('W');
                else ans.push_back('B'); 
            }
            else{
                ans.push_back(v[i][j]);
            }
        }
        res.push_back(ans);
       ans.clear();
    }
    for(auto u : res) cout << u <<'\n';
}
#include<bits/stdc++.h>
using namespace std;

void check(vector<int>&v , int idx){
    idx = v.size()-1;
    for(int j=v.size()-1; j>=0; j--){
        if(v[j] > v[idx]){
            swap(v[idx] , v[j]);
            idx = j;
        }
    }
}

void call(vector<int>&v,int idx){
    idx = v.size()-1;
    // for(auto u : v) cout<<u<<" ";
    // cout<<endl;
    for(int j=v.size()-1; j>=0; j--){
        if(v[j] < v[idx]){
            swap(v[j] , v[idx]);
            idx = j;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        string s; cin>>s;
        vector<int>v,v2(n);
        iota(v2.begin() , v2.end(),1);
        v.push_back(1);
        //v2.erase(v2.begin()+0);
        int k=1,l=n-1;
        for(int i=0; i<n-1; i++){
            if(s[i] == '>'){
                v.push_back(v2[l]);
                l--;
                check(v,i);
            }
            else{
                v.push_back(v2[k]);
                k++;
                call(v,i);
            }
        }
        for(auto u : v) cout<<u<<" ";
        cout<<endl;
    }
}
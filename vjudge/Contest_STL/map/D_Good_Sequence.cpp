#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        mp[a]++;
    }
    int cnt = 0 ;
    for(auto u : mp){
        if(u.first != u.second){
            if(u.first > u.second){
                cnt += u.second;
            }
            else{
                cnt += abs(u.second-u.first);
            }
        }
    }
    cout<<cnt<<endl;
}
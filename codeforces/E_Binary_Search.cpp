#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, key;
        cin >> n >> key;
        vector<int>v(n);
        for(auto &u : v ) cin >> u;
        int l=0,r=n;
        int paisi = 1;
        while(l <= r){
            int mid = (l+r)/2;
            if(v[mid] == key){
                paisi = mid;
            }
            else if(v[mid] < key){
                l = mid;
            }
            else{
                r = mid;
            }
        }
        cout<<1<<'\n'<<(paisi+1)<<" "<<(l+1)<<'\n';
    }
}
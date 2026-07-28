#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slow(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    int n; cin >> n;
    int target; cin >> target;
    vector<ll>v(n+1);
    vector<pair<ll,int>>p(n+1);
    for(int i=1; i<=n; i++){
        ll a; cin >> a;
        ///cin >> v[i];
        p.push_back({a , i});
    }
    sort(p.begin() , p.end());
    for(auto u : p) cout<<u.first<<" "<<u.second<<endl;
    int l = 1,r = n;
    while(l < r){
        if(p[l].first+v[r].first == target){
            cout<<p[l].second<<" "<<p[r].second<<endl;
            return 0;
        }
        else if(p[l].first + v[r].first > target){
            r--;
        }
        else{
            l++;
        }
    }

    cout<<"IMPOSSIBLE";

}

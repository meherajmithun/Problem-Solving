#include<bits/stdc++.h>
using namespace std;

bool Custom_comperator(pair<int,int>&a , pair<int,int>&b){
    if(a.first > b.first) return 1;
    else if (a.first == b.first) {
        return a.second < b.second;
    }
    return false;
}

int main(){
    int n,rank;
    cin >> n >> rank;
    vector<pair<int,int>>vp;
    int solve,penalty;
    for(int i=0; i<n; i++){
        cin >> solve >> penalty;
        vp.push_back({solve , penalty});
    }
    sort(vp.begin() , vp.end(), Custom_comperator);
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(vp[i].first ==  vp[rank-1].first) cnt++;
    }

    cout<<cnt<<'\n';

}
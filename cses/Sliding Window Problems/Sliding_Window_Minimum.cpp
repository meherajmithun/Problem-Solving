#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
    int n, k; cin >> n >> k;
    int x, a, b, c; cin >> x >> a >> b >> c;
    vector<int> v(n);
    v[0] = x;
    for (int i = 1; i < n; i++) {
        v[i] = ((v[i - 1] * a) + b) % c;
    }

    deque<int>dq;
    for(int i=0; i<k; i++){
        if(dq.size()==0){
            dq.push_back(v[i]);
            continue;
        }
        while(dq.size()>0 and dq.back()>v[i]){
            dq.pop_back();
        }
        dq.push_back(v[i]);
    }

    vector<int>ans;
    int j=0;
    for(int i=k; i<n; i++,j++){
        ans.push_back(dq.front());
        while(dq.size()>0 and v[j] == dq.front()){
            dq.pop_front();
        }
        if(dq.size()==0){
            dq.push_back(v[i]);
            continue;
        }

        while(dq.size()>0 and dq.back()>v[i]){
            dq.pop_back();
        }
        dq.push_back(v[i]);
    }
    ans.push_back(dq.front());

    int res=0;
    for(auto a : ans) res ^= a;
    cout<<res;

}

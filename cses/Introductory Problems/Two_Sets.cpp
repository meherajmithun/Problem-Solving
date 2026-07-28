#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    int n; cin>>n;
    if(n == 3){
        cout<<"YES"<<endl;
        cout<<"1"<<endl;
        cout<<3<<endl<<2<<endl<<2<<" "<<1<<endl;
        return 0;
    }
    vector<int>v(n);
    iota(v.begin() , v.end() , 1);
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += v[i];
    }
    set<int>st1,st2;
    ll sum2 = n;
    sum -= n;
    st2.insert(sum2);
    //cout<<sum<<" "<<sum2<<endl;
    bool yes = false;
    for(int i=n-2; i>=0; i--){
        sum2 += v[i];
        sum -= v[i];
        if(sum2>sum){
            sum2 -= v[i];
            sum += v[i];
            st1.insert(v[i]);
        }
        else if(sum2 < sum){
            st2.insert(v[i]);
        }
        else if(sum2 == sum){
            st2.insert(v[i]);
            yes = true;
            //break;
        }
       // cout<<sum2<<" "<<sum<<endl;
    }
    //cout<<sum2<<" "<<sum<<endl;
    if(yes){
        cout<<"YES"<<endl;
        cout<<st1.size()<<endl;
        for(auto u : st1) cout<<u<<" "; cout<<endl;
        cout<<st2.size()<<endl; for(auto u : st2) cout<<u<<" "; cout<<endl;
    }
    else cout<<"NO";
}
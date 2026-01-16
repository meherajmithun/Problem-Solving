#include<bits/stdc++.h>
using namespace std;

vector<int>all_divisor(int n){
    vector<int>divisor;
    for(int i=1; (i*i) <= n; i++){
        if(n%i == 0){
            int a = i;
            bool bl = 1;
            while(a>0){
                int k = a%10;
                if(k>1){
                    bl = 0;
                    break;
                }
                a /= 10;
            }
            if(bl) divisor.push_back(i);
            if(n/i != i) {
                int a = n/i;
                bool bl = 1;
                while(a>0){
                    int k = a%10;
                    if(k>1){
                        bl = 0;
                        break;
                    }
                    a /= 10;
                }
                if(bl) divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin() , divisor.end());
    
    if(divisor[0] == 1){
        divisor.erase(divisor.begin());
    }
    return divisor;
}

void solve(){
    int n; cin>>n;
    bool f = 0;
    int a = n;
    while(n>0){
        int a = n%10;
        if(a>1){
            f = 1;
            break;
        }
        n /= 10;
    }
    if(!f){
        cout<<"YES\n";
        return;
    }

    vector<int>div = all_divisor(a);
    if(div.size() == 0){
        cout<<"NO\n";
        return;
    }

    //for(auto u : div) cout<<u<<" " ; cout<<endl;

    while(a>0){
        f = 0;
        for(int i=0; i<div.size(); i++){
            if(a%div[i] == 0){
                a /= div[i];
                f = 1;
            }
        }
        if(f == 0) break;
    }
    if(a == 0){
        cout<<"YES\n";
        return;
    }
    n = a;
    f = 0;
    while(n>0){
        int a = n%10;
        if(a>1){
            f = 1;
            break;
        }
        n /= 10;
    }
    if(!f){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin>>tc;
    int c = 1;
    while(tc--){
        //cout<<"Case "<<c++<<" : ";
        solve();
    }
}
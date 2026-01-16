#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int a,b,c; cin >> a >> b >> c;
        int p = 2*b;
        int q = a + c;
        if(p <= q){
            if(q % p == 0){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        else{
            int tmp = p-q;
            if(tmp % a == 0 or tmp / a == 0){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mx = 1e7+123;
bitset<mx+12>isprime;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    for(int i=3; i<=mx; i+=2){
        isprime[i] = 1;
    }
    isprime[2] = 1;
    for(int i=3; (i*i)<=mx; i+=2){
        if(isprime[i]){
            for(int j=i*i; j<=mx; j+=(2*i)){
                isprime[j] = 0;
            }
        }
    }
    int n;
    while(true){
        cin>>n;
        if(n == 0) return 0;
        bool fl = 0;
        for(int i=2; i<=n; i++){
            if(isprime[i] and isprime[n-i]){
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                fl = 1;
                break;
            }
        }
        if(!fl) cout<<"Goldbach's conjecture is wrong."<<endl;
    }

}
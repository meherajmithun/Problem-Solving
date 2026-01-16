#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7 + 123;
bool isprime[mx];
vector<int> prime ;
vector<pair<int,int>>ans;

void sieve(int n) {
    
    for (int i = 3; i * i <= n; i += 2) {
        if (!isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = true;
            }
        }
    }
    prime.push_back(0);
    //prime.push_back(); // 2 is the only even prime
    for (int i = 3; i <= n; i += 2) {
        if (!isprime[i]) {
            prime.push_back(i);
        }
    }
}

int main() {
    int n;
    sieve(2000000);
    while(cin>>n){
        int j=0;
        for(int i=0; i<prime.size()-1; i++){
            if(prime[i] + 2 == prime[i+1]){
                //ans.push_back({prime[i] , prime[i+1]});
                j++;
                if(j == n){
                    cout<<"("<<prime[i]<<", "<<prime[i+1]<<")"<<endl;
                    break;
                }
                //cout<<prime[i]<<" "<<prime[i+1]<<endl;
            }
        }
        //cout<<"("<<ans[n-1].first<<", "<<ans[n-1].second<<")"<<endl;
    }
}









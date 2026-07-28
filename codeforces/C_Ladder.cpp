#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
string a,b;
int n;

int swap(){
    int l=0,r=n-1;
    int ans = 0;
    while(l<n){
        if(a[l] != b[l]){
            if(l+1<n and a[l+1] != b[l+1] and a[l] == b[l+1]){
                ans++, l+=2;
            }
            else{
                ans++; l++;
            }
        }
        else l++;
    }
    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>n;
    cin>>a>>b;
    int a_one=0,a_zero=0,b_one=0,b_zero=0;
    for(char c : a) {
        if(c == '0') a_zero++;
        else a_one++;
    }
    for(char c : b) {
        if(c == '0') b_zero++;
        else b_one++;
    }   
    cout<<swap();
    // cout<<a<<" "<<b<<'\n';

    // else{
    //     flip();
    // }

    // cout<<a_one<<" "<<a_zero<<endl<<b_one<<" "<<b_zero<<endl;

}

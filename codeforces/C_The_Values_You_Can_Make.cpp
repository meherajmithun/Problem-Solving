#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int n,k;
vector<int>cs;
set<int>st;
int dp[505][N];

void fun(int i, int sum){
    if(sum>k) return;
    if(dp[i][sum] != -1) return;
    dp[i][sum] = 1;
    if(i==n){
        st.insert(sum);
        return;
    }
    fun(i+1, sum+cs[i]);
    fun(i+1, sum);
}

int main(){
    memset(dp, -1, sizeof(dp));
    cin>>n>>k;
    cs.resize(n);
    for(auto &a: cs) cin>>a;
    int sum = 0;
    fun(0,sum);
    cout<<st.size()<<endl;
    // sort(st.begin() , st.end());
    for(auto a : st){
        cout<<a<<" ";
    }

}
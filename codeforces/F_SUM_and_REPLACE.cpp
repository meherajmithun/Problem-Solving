#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
#define int long long
vector<int>cs(N),seg(N*4),segSum(N*4, 0),divisor(N+12, 0);

void div(){
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i) divisor[j]++;
    }
}
 
void build(int ind, int low,int high){
    if(low==high){
        seg[ind] = cs[low];
        segSum[ind] = cs[low];
        return;
    }
    int mid = (low+high)>>1;
    build(2*ind, low,mid);
    build(2*ind+1, mid+1,high);
    seg[ind] = max(seg[2*ind],seg[2*ind+1]);
    segSum[ind] = (segSum[2*ind]+segSum[2*ind+1]);
}
 
void update(int ind, int low, int high, int l, int r) {
    if(low>r or high<l) return;
    if(seg[ind]<=2) return;
    if (low == high) {
        cs[low]=divisor[cs[low]];
        seg[ind] = cs[low];
        segSum[ind] = cs[low];
        return;
    }
    int mid = (low + high) >> 1;
    update(ind * 2, low, mid, l, r);
    update(ind * 2 + 1, mid + 1, high, l, r);
 
    seg[ind] = max(seg[ind * 2] , seg[ind * 2 + 1]);
    segSum[ind] = (segSum[ind * 2] + segSum[ind * 2 + 1]);
}
 
 
int query(int ind, int low,int high,int l,int r){
    if(r<low or high<l) return 0;
    if(low>=l and high<=r) return segSum[ind];
 
    int mid = (low+high)>>1;
    int left = query(2*ind,low,mid,l,r);
    int right = query(2*ind+1,mid+1,high,l,r);
    return left + right;
}
 
 
int32_t main(){
    div();
    int n,q; cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>cs[i];
 
    build(1,1,n);
    while(q--){
        int type; cin>>type;
        int l,r; cin>>l>>r;
        if(type==1){
            update(1,1,n,l,r) ;
        }        
        else cout<<query(1,1,n,l,r)<<'\n';
    }
 
}
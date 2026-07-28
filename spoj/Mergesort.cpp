#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v,v2;

void merge(int l,int mid, int r){
    int p1 = l,p2 = mid+1;
    int j=l;
    while(p1<=mid and p2<=r){
        if(v[p1] < v[p2]){
            v2[j] = v[p1];
            p1++;
        }
        else{
            v2[j] = v[p2];
            p2++;
        }
        j++;
    }
    while(p1<=mid){
        v2[j] = v[p1];
        p1++; j++;
    }
    while(p2<=r){
        v2[j] = v[p2];
        p2++; j++;
    }

    for(int i=l; i<=r; i++){
        v[i] = v2[i];
    }

}

void mergesort(int l,int r){
    if(l == r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);

    merge(l,mid,r);
    
}

int main(){
    n=0;
    int a; 
    while(cin >> a){
        v.push_back(a);
        n++;
    }
    
    mergesort(0,n-1);

    for(auto u: v) cout<<u<<" ";
}

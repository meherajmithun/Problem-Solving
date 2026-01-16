#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int mx=0,mn=0;
    for(int i=0; i<n; i++){
        if(i%7 == 5 or i%7 == 6) mn++;
        if(i%7 == 0 or i%7 == 1) mx++;
    }
    cout<<mn<<" "<<mx<<endl;
}
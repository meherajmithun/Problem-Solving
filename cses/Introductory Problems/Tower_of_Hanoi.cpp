#include<bits/stdc++.h>
using namespace std;
int i =1;
 
void TOH(int n,int A, int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        //cout<<"Move a Disc from "<< A << " to "<<C<<endl;
        cout<<A<<" "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}
 
int main(){
    int tower; cin>>tower;
    int n = 1<<tower;
    n--;
    cout<<n<<endl;
    TOH(tower,1,2,3);
 
}
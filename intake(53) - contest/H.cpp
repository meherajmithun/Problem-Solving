#include<iostream>
using namespace std;
int main(){
    int t,n,k,p,i,j;
    cin>>t;
    for(j = 1 ; j <= t ; j++){
        cin>>n>>k>>p;
        for(i = 1 ; i <= p ; i++){
            if(k == n){
                k = 1;
            }else k++;
        }
        cout<<"Case "<<j<<": "<<k<<endl;
        }


}

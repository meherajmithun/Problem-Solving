#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    int cnt = 0;
    while(n > 0){
        if(n >= 100){
            cnt += (n/100);
            n %= 100;
        }
        else if(n >= 20 and n < 100){
            cnt += (n/20);
            n %= 20;
        }
        else if(n >= 10 and n < 20){
            cnt += (n/10);
            n %= 10;
        }
        else if(n >= 5 and n < 10){
            cnt += (n/5);
            n %= 5;
        }
        else {
            cnt += (n/1);
            n %= 1;
        }
    }
    cout<<cnt<<endl;
}
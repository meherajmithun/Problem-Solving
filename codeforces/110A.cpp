/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=0;
    cin >> n;
    while(n > 0){
		long long a = n % 10;
		if(a == 4 || a == 7 || a == 47 || a == 744){
		    count++;
		}
		n = n / 10;
    }
    if(count == 4 || count == 7 || count == 47 || count == 744){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}

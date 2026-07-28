
/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int i = 0 ;
	bool flag = true;
	while( i < s.size()){
	    if(s[i] == '1'){
	        i++;
	        if(s[i] == '4'){
	            i++;
	            if(s[i] == '4'){
	                i++;
	            }
	        }
	    }
	    else{
	        flag = false;
	        break;
	    }
	}
	if(flag) cout<<"NO";
	else cout<<"YES";
}

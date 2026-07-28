/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;

void problem(int n,string s1,string s2){
	int i,count_g=0,count_b=0;
	for(i = 0 ; i < n ; i++){
		if(s1[i] == 'G'){
			count_g++;
		}
		else if(s1[i] == 'B'){
			count_b++;
		}
		if(s2[i] == 'G'){
			count_g++;
		}
		else if(s2[i] == 'B'){
			count_b++;
		}
	}
	if(count_g == 2 or count_b == 2) cout<<"YES"<<endl;
	else if(count_b == count_g) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
void solve(){
	int n,i,count_gs1=0,count_bs1=0,count_bs2=0,count_gs2=0;
	string s1,s2;
	cin>>n>>s1>>s2;
	if(n == 1){
		problem(n,s1,s2);
	}
	else {
		for(i = 0 ; i < n ; i++){
			if(s1[i] == 'G'){
				count_gs1++;
			}
			else if(s1[i] == 'B'){
				count_bs1++;
			}
			if(s2[i] == 'G'){
				count_gs2++;
			}
			else if(s2[i] == 'B'){
				count_bs2++;
			}
		}
	if((count_bs1 == count_bs2) && (count_gs1 == count_gs2)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

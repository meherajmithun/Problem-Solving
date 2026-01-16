/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n>>a;
	while(a--){
		if(n % 10 == 0){
			n = n / 10;
		}
		else {
			n = n - 1;
		}
	}
	cout<<n<<endl;
}

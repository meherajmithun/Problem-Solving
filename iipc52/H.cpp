/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
	int n,a;
	cin>>n;
	vector<int>o;
	vector<int>e;
	for(int i = 0 ; i < n ; i++){
		cin>>a;
		if(a % 2 == 0){
			e.push_back(a);
		}
		else {
			o.push_back(a);
		}
	}
	sort(o.begin() , o.end() , greater<int>());
	sort(e.begin() , e.end());
	for(auto u : o) cout<<u<<" ";
	for(auto u : e) cout<<u<<" ";
}

/*int main(){
	int x,n,l,i,j=0,k=0;
	cin>>n;
	int arr1[n],arr2[n];
	for(i = 0 ; i < n ; i++){
		cin>>x;
		if(x % 2 != 0){
			arr1[j] = x;
			j++;
		}
		else {
			arr2[k] = x;
			k++;
		}
	}
    sort(arr1, arr1 + j, greater<int>());
    for(l = 0 ; l < j ; l++){
        cout<<arr1[l]<<" ";
    }
    sort(arr2 , arr2 + k);
    for(int a = 0 ; a < k ; a++){
        cout<<arr2[a]<<" ";
    }
}
*/

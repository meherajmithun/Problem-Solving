/*
  IN THE NAME OF ALLAH
  Author:Meheraj Hossain Mithun
  Bangladesh Univerity Of Bussiness And Technology
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n , m , c = 0;
  cin >> n >> m;
  if(n == m){
      cout << c << endl;
      return 0;
  }
	while (m > n) {
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m++;
        }
        c++;
    }
	c+= (n - m);
	cout<<c<<endl;
}


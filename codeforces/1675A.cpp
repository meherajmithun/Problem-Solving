/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

string solve(){

	double a,b,c,d,e, i = 2;
	cin >> a >> b >> c >> d >> e;

	double n = round(c / i);

	if(((a + n) >= d) && ((b + n) >= e)) return "YES";

	else return "NO";

}
int main(){
    optimize();
    int T;
    cin >> T;
    while(T--){
        cout << solve() << endl;
    }
}

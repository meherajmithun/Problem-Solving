
/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
 
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main(){
    optimize();
    int n , k , count = 0;
    cin >> n >> k;
    int m = 1200 + k;
    for(int i = 1; i <= n; i++){
        m = m + i*5;
        if(m <= 1440){
            count++;
        }
    }
    cout << count <<endl;
}
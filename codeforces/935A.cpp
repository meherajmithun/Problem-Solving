/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,cnt=1;
    cin>>n;
    for( i = 2; i * i < n; i++ )
    {
        if( n % i == 0)
            cnt += 2;
    }
    if( (double)sqrt(n) == (int)sqrt(n) )
        cnt++;
    cout<<cnt <<endl;
    return 0;
}
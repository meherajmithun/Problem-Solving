#include <bits/stdc++.h>
using namespace std;

using ll   =  long long;
using ull  =  unsigned long long;
using ld   =  long double;

#define endl            '\n'
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define point(x)        fixed << setprecision(x)
#define FastIo          ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define sz(x)           (int)x.size()

const ld pi = acos(-1);
const ll mod = 1e9 + 7;
const ll mxn = 1e5 + 5;

void Plz_Ac() {
    ll a , b; cin >> a >> b;
    int cnt = 0;
    if(a == b){
        cnt = (a/3)*2;
        if(a % 3 == 2 ) cnt++;
    }
    else if (a*2 <= b or b*2 <= a ){
        cnt = min(a,b);
    }
    else{
        while( a!= b){
            int dif = abs(a-b);
            //cout<<"x "<<a <<" "<< b<<" "<<cnt<<endl;
            if(dif == 1){
                if(a > b){
                    a-= 2;
                    b--;
                }
                else {
                    b -= 2;
                    a--;
                }
                cnt++;
                break;
            }
            else{
                if(dif % 2 != 0) dif--;
                int k = dif/2;

                if(a > b){
                    a -= dif;
                    b -= k;
                }
                else{
                    b -= dif;
                    a -= k;
                }
                cnt += k;
            }
        }
       // cout<<"y "<<cnt<<" "<<a<<" "<<b<<endl;
        if((a == 2 and b == 1) or (b == 2 and a == 1) or (a == 2 and b == 2)) cnt++, a-= 2,b-=2;
        else if( a > 2 and b > 2){
            cnt+= (a/3)*2;

        if(a % 3 == 2 ) cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    FastIo;
    int test = 1;
    cin >> test;
    while (test--) {
        Plz_Ac();
    }
    return 0;
}

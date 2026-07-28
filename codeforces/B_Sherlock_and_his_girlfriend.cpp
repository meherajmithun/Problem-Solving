//  IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long
const int mx = 1e7 + 123;
bool isprime[mx];
vector<int> prime;

void sieve(int n) {
    for (int i = 3; i <= n; i += 2) {
        isprime[i] = true;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    isprime[2] = true;
    prime.push_back(2); // 2 is the only even prime
    for (int i = 3; i <= n; i += 2) {
        if (isprime[i]) {
            prime.push_back(i);
        }
    }
}

int32_t main() {
    int n;
    int limit = 1e7;
    sieve(limit);
    cin >> n;
    if(n < 3) cout<<1<<endl;
    else cout<<2<<endl;
    for(int i = 1; i <= n; i++){
        if(isprime[i+1]) cout<<1<<" ";
        else cout<<2<<" ";
    }
    cout << endl;
  //  return 0;
}
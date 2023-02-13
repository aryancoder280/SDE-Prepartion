#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void primeSieve(vector<ll>&sieve, ll n) {

    sieve[0] = sieve[1] = 0;
    for(ll i=2;i*i<=n;i++) {
        if(sieve[i] == 1) {
            for(ll j = i*i;j<=n;j+=i) {
                sieve[j] = 0;
            }
        }
    }
    return;
}

ll countPrimes(ll n){
    vector<ll>sieve(n+1,1);
    primeSieve(sieve,n);
    ll count[n+1] = {0};
    ll cnt = 0;

    for(ll i=2;i<=n;i++) {
        if(sieve[i] == true) {
            count[i] = count[i-1] + 1;
        }
        else {
            count[i] = count[i-1];
        }
    }
    return count[n];
}
int main() {

    ll n;
    cin>>n;
    cout<<countPrimes(n);
}

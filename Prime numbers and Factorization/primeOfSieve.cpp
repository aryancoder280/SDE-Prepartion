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
int main() {

    ll n;
    cin>>n;
    vector<ll>sieve(n+1,1);
    primeSieve(sieve,n);
    if(sieve[n] == 1) {
        cout<<n<<" is prime";
    }
    else {
        cout<<n<<" is not prime";
    }
}

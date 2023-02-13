#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void sieve(vector<ll>&primeSieve,ll n,vector<ll>&primes) {
    primeSieve[0] = primeSieve[1] = 0;
    for(ll i = 2;i*i<=n;i++) {
        if(primeSieve[i] == 1) {
            for(ll j= i*i;j<=n;j+=i) {
                primeSieve[j] = 0;
            }
        }
    }
    for(ll i=2;i<=n;i++) {
        if(primeSieve[i] == 1) {
            primes.push_back(i);
        }
    }
}
bool check(ll val,vector<ll>primes) {

    if(val<2) {
        return false;
    }
    for(ll i=0;i<primes.size();i++) {
        if(primes[i]*primes[i]>val) {
            break;
        }
        if(val%primes[i] == 0) {
            return false;
        }
    }
    return true;
}
int main() {

    ll n = 100000;
    vector<ll>primeSieve(n+1,1),primes;
    sieve(primeSieve,n,primes);
    cout<<1<<endl;
    int t;
    cin>>t;
    while(t--) {
            ll a,b;
            cin>>a>>b;
            ll diff = b-a+1;
            cout<<diff<<endl;
            vector<ll>segmentedSieve(diff,1);

            for(ll i=0;i<diff;i++) {
                if(!check(a+i,primes)) {
                    segmentedSieve[i] = 0;
                }
            }
            vector<ll>primesInRange;
            ll cnt = 0;
            for(ll i=0;i<diff;i++) {
                if(segmentedSieve[i]) {
                    primesInRange.push_back(a+i);
                    cnt++;
                }
            }

            cout<<cnt<<endl;

    }

}

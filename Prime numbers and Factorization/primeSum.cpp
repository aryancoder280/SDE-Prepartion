#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void primeSieve(vector<ll>&sieve, ll n,vector<ll>&prime) {

    sieve[0] = sieve[1] = 0;
    for(ll i=2;i*i<=n;i++) {
        if(sieve[i] == 1) {
            for(ll j = i*i;j<=n;j+=i) {
                sieve[j] = 0;
            }
        }
    }
    for(int i=2;i<=n;i++) {
        if(sieve[i]) {
            prime.push_back(i);
        }
    }
    return;
}

int solve(int n){
    vector<ll>sieve(n+1,1),prime;
    primeSieve(sieve,n,prime);
    int cnt = 0;
    for(int i=0;i<prime.size();i++) {
        for(int j=i+1;j<prime.size();j++) {
            int a = prime[i];
            int b = prime[j];
            int sum = a +b;
            if(sum<=n && sieve[sum]) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}

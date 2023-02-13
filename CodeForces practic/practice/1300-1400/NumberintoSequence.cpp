#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;

void findFactors(ll n,vector<ll>&factors) {

    for(ll i=2;i*i<=n;i++) {
        if(n%i==0) {
            factors.push_back(i);
        }
    }
}
ll countFactors(ll num,ll n) {

    ll cnt = 1;
    bool valid = true;
    while(valid) {
        n = n/num;
        if(n%num ==0 ) {
            cnt++;
        }
        else {
            valid = false;
        }
    }
    return cnt;
}
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll cnt = 1;
        vector<ll>factors;
        findFactors(n,factors);
        ll lastFactor = n;
        for(ll i=0;i<factors.size();i++) {
            ll num = factors[i];
            ll temp = countFactors(num,n);
            if(temp>cnt) {
                cnt = temp;
                lastFactor = num;
            }
        }
        cout<<cnt<<endl;
        while(cnt!=1) {
            cout<<lastFactor<<" ";
            n/=lastFactor;
            cnt--;
        }
        cout<<n<<endl;
    }
}




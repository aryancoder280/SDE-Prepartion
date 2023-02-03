
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll getPower(ll n) {

    ll cnt = 0;
    while(n>1) {
        n/=2;
        cnt++;
    }
    return cnt;
}
int main() {
  ll t;
  cin>>t;
  while(t--) {
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<vector<ll> >v(31);
    for(ll i=0;i<n;i++) {
        ll cnt = getPower(arr[i]);
        v[cnt].push_back(arr[i]);
    }
    bool valid = true;
    for(ll i=30;i>0;i--) {
        ll x = 0;
        for(ll j=0;j<v[i].size();j++) {
            x = x ^ v[i][j] ;
        }
        ll cnt = getPower(x);
        if(cnt == i) {
            valid = false;
            break;
        }
        v[cnt].push_back(x);
    }
    if(valid) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
  }
}


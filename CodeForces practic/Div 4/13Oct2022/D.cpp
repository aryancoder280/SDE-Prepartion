


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    unordered_map<ll,ll>mp;
    vector<pair<ll,ll> >vp;
    for(ll i=n-1;i>=0;i--) {
        if(mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] = i+1;
            vp.push_back({arr[i],i+1});
        }
    }
    ll ans = -1;
    for(ll i=0;i<vp.size();i++) {
        for(ll j=i;j<vp.size();j++) {
            ll a = vp[i].first;
            ll indA = vp[i].second;
            ll b = vp[j].first;
            ll indB = vp[j].second;
            ll gcd = __gcd(a,b);
            if(gcd == 1) {
                ans = max(ans,indA+indB);
            }
        }
    }
    cout<<ans<<endl;
    }
}

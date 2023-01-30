#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<pair<ll,ll>,ll>mp;
ll fun(ll arr[],ll i,ll sum,ll n) {
    pair<ll,ll>p = make_pair(i,sum);
    if(sum<0) {
        return -1;
    }
    if(i == n) {
        return 0;
    }
    if(mp.find(p) != mp.end()) {
            cout<<"mp[p] = "<<mp[p]<<endl;
        return mp[p];
    }
    else {
        if(arr[i]>=0) {
            ll val = 1 + fun(arr,i+1,sum+arr[i],n);
            pair<ll,ll>p = make_pair(i,sum);
           mp[p] = val;
            return mp[p];
        }
        else {
            ll val =  max(fun(arr,i+1,sum,n),1+fun(arr,i+1,sum+arr[i],n));
           mp[p] = val;
            return mp[p];
        }
    }
}
int main() {
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    ll sum = 0;
    ll ans = fun(arr,0,sum,n);
    cout<<ans<<endl;
}

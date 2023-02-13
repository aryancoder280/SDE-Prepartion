
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool comp(pair<ll,ll>a,pair<ll,ll>b) {

    return a.first<b.first;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      pair<ll,ll>pArray[n];
      ll arr[n];
      ll sum = 0;
      for(ll i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
        pArray[i] = {arr[i],i};
      }
      sort(pArray,pArray+n,comp);
      ll curr = pArray[0].first;
      ll finalDiff = 0;
      for(ll i=1;i<n;i++) {
        ll val = (pArray[i].first/curr)*curr;
        finalDiff += abs(arr[pArray[i].second]-val);
        arr[pArray[i].second] = val;
        curr = val;
      }
      for(ll i=0;i<n;i++) {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
     ll one[n],two[n];
     one[0] = 0;
     for(ll i=1;i<n;i++) {
        one[i] = max(arr[i-1],one[i-1]);
     }
     two[n-1] = 0;
     for(ll i=n-2;i>=0;i--) {
        two[i] = max(two[i+1],arr[i+1]);
     }
     ll ans[n] = {0};
     for(ll i=0;i<n;i++) {
      ll large = max(one[i],two[i]);
      ans[i] = arr[i] - large;
     }
     for(ll i=0;i<n;i++) {
      cout<<ans[i]<<" ";
     }
     cout<<endl;
  }
}

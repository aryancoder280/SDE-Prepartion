




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
      ll neg = 0;
      for(ll i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]<0) {
            neg++;
        }
      }
      if(neg&1) {
          ll sum = 0;
          ll minVal = 10000000000;
      int ind = -1;
        for(ll i=0;i<n;i++) {
            if(minVal>abs(arr[i])) {
                ind = i;
                minVal = abs(arr[i]);
            }
        }
         for(ll i=0;i<n;i++) {
            if(i!=ind) {
                sum = sum + abs(arr[i]);
            }

        }
        sum-=abs(minVal);
        cout<<sum<<endl;
      }
      else {
        ll sum = 0;
        for(ll i=0;i<n;i++) {
            sum = sum + abs(arr[i]);
        }
        cout<<sum<<endl;
      }
    }
}


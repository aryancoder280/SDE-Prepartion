



#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll right[27] = {0};
      ll left[27] = {0};
      ll lCount = 0, rCount = 0;
      for(ll i=0;i<s.size();i++) {
        ll ind = s[i]-'a';
        right[ind]++;
        if(right[ind] == 1) {
            rCount++;
        }
      }
      //cout<<lCount<<" "<<rCount<<endl;
      ll i = 0;
      ll ans = rCount;
      while(i<n) {
        ll ind = s[i]-'a';
        right[ind]--;
        left[ind]++;
        if(left[ind] == 1) {
            lCount++;
        }
        if(right[ind] == 0) {
            rCount--;
        }
        ans = max(ans,lCount+rCount);
        i++;
      }
      cout<<ans<<endl;
    }
}


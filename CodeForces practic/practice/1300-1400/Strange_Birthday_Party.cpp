#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {

    ll t;
    cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      ll member[n],presents[m];
      for(ll i=0;i<n;i++) {
        cin>>member[i];
        member[i]--;
      }
      for(ll i=0;i<m;i++) {
        cin>>presents[i];
      }
      sort(member,member+n,greater<ll>());
      ll i=0,j=0;
      ll money = 0;
      while(i<n && j<m && member[i]>=j) {
        money+=presents[j];
        i++;j++;
      }
      while(i<n) {
        if(member[i]<m)
            money+=presents[member[i]];
      i++;
      }
      cout<<money<<endl;
    }
}



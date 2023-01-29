


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        ll sum[n] = {0};
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
            if(i == 0) {
                sum[i] = arr[i];
            }
            else {
                sum[i] = sum[i-1] + arr[i];
            }
        }
        vector<ll>ques;
        for(ll i=0;i<q;i++) {
            ll k;
            cin>>k;
            ques.push_back(k);
        }
        ll large[n] = {0};
        large[0] = arr[0];
        for(ll i=1;i<n;i++) {
            large[i] = max(large[i-1],arr[i]);
        }
        //cout<<"ans\n";
        for(ll i=0;i<q;i++) {
            ll k = ques[i];
            ll l = 0,r = n-1;
            ll ans = 0;
            while(l<=r) {
                ll mid = l + (r-l)/2;
                if(large[mid]<=k) {
                    ans = sum[mid];
                    l = mid+1;
                }
                else {
                    r = mid-1;
                }
            }

            cout<<ans<<" ";
        }
        cout<<endl;
        }


}


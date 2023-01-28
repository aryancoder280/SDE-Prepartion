#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll countInversion(ll arr[],ll cnt[],ll n) {
    ll sum = 0;
    for(ll i=n-1;i>=0;i--) {
            if(arr[i] == 0) {
                if(i!=n-1) {
                    cnt[i] = cnt[i+1] + 1;
                }
                else {
                    cnt[i] = 1;
                }
            }
            else {
                if(i!=n-1) {
                    cnt[i] = cnt[i+1];
                }
                else {
                    cnt[i] = 0;
                }
            }
        }
        for(ll i=0;i<n;i++) {
            sum = sum + arr[i]*cnt[i];
        }

        return sum;
}

int main() {

    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll arr[n];
        ll temp[n];
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
            temp[i] = arr[i];
        }
        ll cnt[n] = {0};
        ll ans = 0;
        //original array
        ans = max(ans,countInversion(arr,cnt,n));
        //extreme left zero to one
        ll i=0;
        while(i<n) {
            if(temp[i] == 0) {
                temp[i] = 1;
                break;
            }
            i++;
        }
        ans = max(ans,countInversion(temp,cnt,n));
        i = n-1;
        while(i>=0) {
            if(arr[i] == 1) {
                arr[i] = 0;
                break;
            }
            i--;
        }
        ans = max(ans,countInversion(arr,cnt,n));
        cout<<ans<<endl;
    }
}

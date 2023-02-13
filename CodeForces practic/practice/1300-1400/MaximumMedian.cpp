#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ind = n/2;
    ll ans;
    if(n == 1) {
        ans = arr[0]+k;
    }
    else if(k<=(arr[ind+1]-arr[ind])) {
        ans = arr[ind]+k;
    }
    else {
            ll cnt = 1;
        while(ind+1<n) {
            ll nextK = (arr[ind+1]-arr[ind])*cnt;
            if(k<=nextK) {
                ans = arr[ind]+k/cnt;
                k=0;
                break;
            }
            else {
                k-=nextK;
                cnt++;
                arr[ind] = arr[ind+1];
                ind++;
            }
        }
        if(k!=0) {
            ans = arr[ind] + k/cnt;
        }

    }
    cout<<ans<<endl;

}

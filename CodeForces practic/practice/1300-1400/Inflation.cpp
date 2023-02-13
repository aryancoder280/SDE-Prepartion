#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;

bool check(vector<ll>arr,ll val,ll n,ll k,ll mid) {
   // cout<<"Mid="<<mid<<endl;
    arr[0]+=val;
    double  dino = arr[0];
    bool valid = true;
    double inflation = (double)k/100;
    for(ll i=1;valid && i<n;i++) {
        double num = arr[i];
        double fraction = num/dino;
       // cout<<"valid = "<<valid<<" "<<num<<" "<<dino<<" "<<inflation<<" "<<fraction<<" "<<endl;
        valid = fraction<=inflation;
        dino+=arr[i];
    }
    return valid;
}
int main() {
    ll t;
    cin>>t;
    while(t--) {
       ll n,k;
       cin>>n>>k;
       vector<ll>arr;
       ll sum = 0;
       for(ll i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
        sum+=x;
       }
       ll low = 0,high = 10000000000000;
       ll ans = -1;
       while(low<=high) {
            ll mid = low + (high-low)/2;
            if(check(arr,mid,n,k,mid)) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
       }
       cout<<ans<<endl;
    }
}



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

    ll t;
    cin>>t;
    while(t--) {
        ll n,c,d;
        cin>>n>>c>>d;
        ll arr[n];
        int arraySum = 0;
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
        }
        int temp = d;
        int ind = n-1;
        while(ind>=0 && temp) {
            arraySum+=arr[ind--];
            temp--;
        }
        sort(arr,arr+n);
        ll l = 0, r = d+2;
        ll val = arr[n-1]*d;
        ll ans = 0;
        if(val<c) {
            cout<<"Impossible\n";
        }
        else {
            while(l<=r) {
                ll mid = l + (r-l)/2;
                ll temp = mid;
            //cout<<l<<" "<<r<<" "<<mid<<endl;
                ll sum = 0;
                sum+=arr[n-1];
                ll i = n-2;
                while(i>=0 && temp) {
                    sum+=arr[i--];
                    temp--;
                }
                ll remDays = d%(mid+1);
                //cout<<"remdays="<<remDays<<endl;
                ll val = (d/(mid+1))*sum;
                //cout<<sum<<" "<<val<<endl;
                ll end = n-1;
                while(end>=0 && remDays) {
                    val+=arr[end--];
                    remDays--;
                }
                if(val>=c) {
                    ans = mid;
                    l = mid+1;
                }
                else {
                    r = mid-1;
                }
            }
            if(ans == d+2) {
                cout<<"Infinity\n";
            }
            else {
                    cout<<ans<<endl;
            }
        }

    }

}

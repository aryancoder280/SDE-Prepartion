





#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll digits(ll n) {

    ll cnt = 0;
    while(n>0) {
        cnt++;
        n/=10;
    }
    return cnt;
}
ll sumOfDigits(ll n) {

    ll sum = 0;
    while(n) {
        sum += n%10;
        n/=10;
    }
    return sum;
}
void updateArray(ll arr[],ll l,ll r,ll n,vector<ll>&single) {

//cout<<"I am inside to update\n";
    while(l<=r) {
        bool valid = false;
        if(digits(arr[l]) == 1) {
            valid = true;
        }
        arr[l] = valid ? arr[l] : sumOfDigits(arr[l]);
        if(!valid) {
            if(digits(arr[l]) == 1)
            single[l] = single[l-1] + 1;
            else {
                single[l] = single[l-1];
            }
        }
        l++;
    }
}
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        vector<ll>single(n,0);
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++) {
            if(digits(arr[i]) == 1) {
                single[i] = 1;
            }
        }
        for(ll i=1;i<n;i++) {
            single[i] = single[i-1] + single[i];
        }
        /*for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++) {
            cout<<single[i]<<" ";
        }*/

        while(q--) {
            ll x;
            cin>>x;
            if(x == 1) {
                ll l,r;
                cin>>l>>r;
                l--;
                r--;
                if(single[r]!=r+1) {
                    updateArray(arr,l,r,n,single);
                }
                /*for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++) {
            cout<<single[i]<<" ";
        }
        cout<<endl;*/
            }
            else {
                    ll ind;
                    cin>>ind;
                cout<<arr[ind-1]<<endl;
            }
        }
    }
}



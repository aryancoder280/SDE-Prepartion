#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            arr[i]--;
        }
        int l = -1,r = -1;
        for(int i=0;i<n;i++) {
            if(arr[i]!=i) {
                if(l == -1) {
                    l = i;
                }
                else {
                    r = i;
                }
            }
        }
        if(l == -1) {
            cout<<0<<endl;
        }
        else {
            int k = r;
            int same = 0;
            for(int ind = l;ind<=r;ind++) {
                if(arr[ind] == ind) {
                    same++;
                }
            }
            if(!same) {
                cout<<1<<endl;
            }
            else {
                cout<<2<<endl;
            }

        }
    }
}


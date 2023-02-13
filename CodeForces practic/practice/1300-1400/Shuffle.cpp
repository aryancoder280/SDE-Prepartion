#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n,x,m;
        cin>>n>>x>>m;
        ll left = x,right = x;
        while(m--) {
            ll l,r;
            cin>>l>>r;
            if(l<=left && right<=r) {
                left = l;
                right = r;
            }
            if(left<=l&&l<=right&&r>right) {
                right = r;
            }
            if(l<=left&&r>=left&&r<=right) {
                left = l;
            }
        }
        cout<<right-left+1<<endl;
    }
}

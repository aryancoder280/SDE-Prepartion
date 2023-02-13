#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {

    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll l,r;
        cin>>l>>r;
        vector<ll>v;
        for(ll i=0;i<n;i++) {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll pairs = 0;
        for(ll i=0;i<n;i++) {
            ll x = l-v[i];
            ll y = r-v[i];
            ll leftInd = lower_bound(v.begin(),v.end(),x) - v.begin();
            ll rightInd = upper_bound(v.begin(),v.end(),y) - v.begin() -1;
            if(i>rightInd) {
                continue;
            }
            if(i>=leftInd) {
                leftInd = i;
            }
            pairs += rightInd-leftInd+1;
            if(i == leftInd) {
                pairs--;
            }
        }
        cout<<pairs<<endl;
    }
}
/*
if(leftInd == -1 && rightInd == -1) {
                continue;
            }
            else if(leftInd == -1 && rightInd!=-1) {
                leftInd = 0;
            }
            else if(leftInd!=-1&&rightInd == -1){
                rightInd = n-1;
            }
                //cout<<i<<" "<<leftInd<<" "<<rightInd<<endl;
                if(i>=leftInd && i<=rightInd) {
                    leftInd = i;
                }
                if(i>rightInd) {
                    continue;
                }
                if(leftInd<=rightInd) {
                    pairs+=rightInd - leftInd +1;
                }
                if(leftInd == i) {
                    pairs--;
                }

*/

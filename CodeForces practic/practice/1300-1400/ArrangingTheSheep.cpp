#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll leftCount[n] = {0},rightCount[n] = {0};
        ll leftTot[n] = {0}, rightTot[n] = {0};
        ll cnt = 0;
        for(ll i=0;i<n;i++) {
            leftCount[i] = cnt;
            if(s[i] == '*') cnt++;
        }
        cnt = 0;
        for(ll i=n-1;i>=0;i--) {
            rightCount[i] = cnt;
            if(s[i] == '*') cnt++;
        }
        //right to left
        for(ll i=n-1;i>=0;i--) {
            if(i+1<n) {
                if(s[i]!='*') {
                    rightTot[i] = rightTot[i+1] + rightCount[i];
                }
                else {
                    rightTot[i] = rightTot[i+1];
                }
            }
        }

        //left to right
        for(ll i=1;i<n;i++) {
            if(s[i] != '*') {
                leftTot[i] = leftTot[i-1]+leftCount[i];
            }
            else {
                leftTot[i] = leftTot[i-1];
            }
        }
        ll ans = 1000000000000000000;
        for(ll i=0;i<n;i++) {
            ll leftSum = 0;
            if(i+1==n) {
                leftSum = leftTot[i];
            }
            else {
                    leftSum = leftTot[i]+rightTot[i+1];
            }

            ans = min(ans,leftSum);
        }
        for(ll i=n-1;i>=0;i--) {
            ll rightSum = 0;
        if(i-1<0) {
             rightSum = rightTot[i];
        }
        else {
            rightSum = leftTot[i-1]+rightTot[i];
        }
            ans = min(ans,rightSum);
        }
        cout<<ans<<endl;
    }
}



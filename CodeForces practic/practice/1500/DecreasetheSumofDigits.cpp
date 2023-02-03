#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>digits;
        ll sum = 0;
        while(n) {
            ll dig = n%10;
            sum+=dig;
            n/=10;
            digits.push_back(dig);
        }
        digits.push_back(0);
        vector<ll>ans;
        reverse(digits.begin(),digits.end());
        if(sum>k) {

                ll carry = 0;
                for(ll i=digits.size()-1;sum>k && i>=0;i--) {
                    //cout<<sum<<endl;
                    digits[i] = digits[i] + carry;
                    //217871987498122 10
                    //9782128012501878
                    ll diff = 10-digits[i];
                    ll digitSum = digits[i]+diff;
                    ans.push_back(diff);
                    sum-=digits[i]-1;
                    carry = digitSum/10;
                }
        }
        if(ans.size()==0) {
            cout<<0<<endl;
        }
        else {
            reverse(ans.begin(),ans.end());
            ll finalSum = 0;
            for(ll i=0;i<ans.size();i++) {
                finalSum = finalSum*10 + ans[i];
            }
            cout<<finalSum<<endl;
        }


    }
}

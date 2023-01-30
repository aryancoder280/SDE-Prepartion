#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {

    ll t;
    cin>>t;
    while(t--) {
        ll n,a,b;
        cin>>n>>a>>b;
        ll val = 1;
        bool valid = false;
        if(a == 1) {
            bool num = (n-1)%b == 0 ? true:false;
            if(num) {
                valid = true;
            }
        }
        else {
            while(val<=n) {
               // cout<<"val = "<<val<<endl;
            bool num = (n-val)%b == 0 ? true:false;
            if(num) {
                valid = true;
                break;
            }
            val*=a;
            }
        }
        if(valid) {
                cout<<"YES\n";
            }
        else {
            cout<<"NO\n";
        }
    }
}

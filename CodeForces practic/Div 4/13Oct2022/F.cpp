



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--) {
        ll q;
        cin>>q;
        bool a = false, b = false;
        ll cnt1 = 0,cnt2 = 0;
        while(q--) {
              //  cout<<"ques:"<<endl;
            ll d,k;
       string x;
       cin>>d>>k>>x;


       for(auto c:x) {
        if(d == 1) {
            if(c!='a') {
                a = true;
            }
            else
                cnt1 +=k;
        }
        else {
            if(c!='a') {
                b = true;
            }
            else {
                cnt2+=k;
            }
        }
       }

      // cout<<"a="<<a<<" "<<cnt1<<" "<<cnt2<<endl;
       if(b) {
        cout<<"YES\n";
       }
       else if(!a && cnt1<cnt2) {
        cout<<"YES\n";
       }
       else
        cout<<"NO\n";
        }

    }
}


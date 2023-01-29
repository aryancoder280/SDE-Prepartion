#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        string ans = "YES\n";
        if(a+b == c) {
            cout<<ans;
        }
        else if(a+c == b) {
            cout<<ans;
        }
        else if(b+c == a) {
            cout<<ans;
        }
        else {
            cout<<"NO\n";
        }

    }
}

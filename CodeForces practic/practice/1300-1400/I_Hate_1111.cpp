#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
        ll n;
        cin>>n;
        int b = n%11;
        int A = n-b*111;
        if(A>=0 && A%11 == 0) cout<<"YES\n";
        else cout<<"NO\n";
	}
}

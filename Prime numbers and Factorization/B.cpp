

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int l=0,r=0;
       bool valid = false;
       for(int i=0;i<n;i++) {
        if(s[i] == 'U') {
            l++;
        }
        else if(s[i] == 'L') {
            r--;
        }
        else if(s[i] == 'R') {
            r++;
        }
        else {
            l--;
        }
        if(l == 1 && r == 1) {
            valid = true;
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


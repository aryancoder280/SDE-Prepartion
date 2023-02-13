

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
        char c;
        cin>>c;
        string s = "codeforces";
        bool valid = false;
        for(int i=0;i<s.size();i++) {
            if(s[i] == c) {
                valid = true;
                break;
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


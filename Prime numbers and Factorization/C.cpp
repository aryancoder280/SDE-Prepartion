


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
      int l = 0, r= s.size()-1;
      int len = 0;
      if(n&1) {
        len = 1;
      }

      while(l<r) {
        if(s[l] == '0' && s[r] == '1') {
            l++;
            r--;
        }
        else if(s[l] == '1' && s[r] == '0') {
            l++;
            r--;
        }
        else {
            len = r-l+1;
            break;
        }
      }
      cout<<len<<endl;
    }
}


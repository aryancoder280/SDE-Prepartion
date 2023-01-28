
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
      int n;
      string s;
      cin>>n>>s;
      char last = s[0];
      for(int i=0;i<s.size();i++) {
        if(s[i]>last) {
            last = s[i];
        }
      }
      cout<<last-'a'+1<<endl;
    }


}




#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool checkPalindrome(string s,int i,int j) {

    while(i<=j) {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) {
      string s;
      cin>>s;
      int i=0;
      int n = s.size();
      int m=0;
      vector<int>prev(26,false);
      for(int i=0;i<n;i++) {
        if(prev[s[i]-'a']) {
            m+=2;
            for(int j=0;j<26;j++) {
                prev[j] = false;
            }
        }
        else {
                prev[s[i]-'a']=true;

        }

      }
      cout<<n-m<<endl;
}
}

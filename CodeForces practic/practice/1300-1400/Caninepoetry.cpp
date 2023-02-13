

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
        int cnt=0;
        while(i<s.size()) {
            if(i+2<s.size() && checkPalindrome(s,i,i+2)) {
                int j= i+2;
                if(j+2<s.size()) {
                    char ch = 'a';
                    while(ch==s[j] || ch==s[j+2] || ch==s[j+1]||ch==s[j-1]) {
                        ch++;
                    }
                    s[j] = ch;
                    cnt++;
                }
                else if(j+1<s.size()){
                    char ch = 'a';
                    while(ch==s[j] || ch==s[j+1]||ch==s[j-1]) {
                        ch++;
                    }
                    s[j] = ch;
                    cnt++;
                }
                else {
                    char ch = 'a';
                    while(ch==s[j] || ch==s[j-1]) {
                        ch++;
                    }
                    s[j] = ch;
                    cnt++;
                }
            }
             if(i+1<s.size() && checkPalindrome(s,i,i+1)) {
                int j = i+1;
                 if(j+2<s.size()) {
                    char ch = 'a';
                    while(ch==s[j] || ch==s[j+2] || ch==s[j+1] || (j-2>=0 && ch==s[j-2])) {
                        ch++;
                    }
                    s[j] = ch;
                    cnt++;
                }
                else if(j+1<s.size()){
                    char ch = 'a';
                    while(ch==s[j] || ch==s[j+1] || (j-2>=0 && ch==s[j-2])) {
                        ch++;
                    }
                    s[j] = ch;
                    cnt++;
                }
                else {
                    char ch = 'a';
                    while(ch==s[j] || (j-2>=0 && ch==s[j-2])) {
                        ch++;
                    }
                    s[j] = ch;
                    cnt++;
                }
            }
            i++;
        }
        cout<<cnt<<endl;
    }
}

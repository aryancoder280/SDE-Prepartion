

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
void fun(vector<int>v,string &s,int x) {
    int n = v.size();
    for(int i=0;i<v.size();i++) {
        int before = 0, after =0;
        if(i-x>=0) {
            if(v[i-x] == 1) {
                before = 1;
            }
        }
        if(i+x<n) {
            if(v[i+x] == 1) {
                after = 1;
            }
        }
        if(before || after) {
            s = s + '1';
        }
        else {
            s  = s+ '0';
        }
    }
}
ll getPower(ll n) {

    ll cnt = 0;
    while(n>1) {
        n/=2;
        cnt++;
    }
    return cnt;
}
int main() {
      ll t;
      cin>>t;
      while(t--) {
        string s;
        cin>>s;
        int x;
        cin>>x;
       int n = s.size();
       vector<int>v(n,-1);
       bool valid = true;
       for(int i=0;i<n;i++) {
            if(s[i] == '1') {
                //cout<<"s of "<<i<<" "<<s[i]<<endl;
                if(i-x<0) {
                    if(i+x<n) {
                        v[i+x] = 1;
                    }
                    else {
                        valid = false;
                        break;
                    }
                }
                else {
                    if(i+x>n) {
                        if(v[i-x] == 0) {
                            valid = false;
                            break;
                        }
                        else {
                            v[i-x] = 1;
                        }
                    }
                    else {
                       if(v[i-x] == 0) {
                        v[i+x] = 1;
                       }
                       else {
                        valid = false;
                        break;
                       }
                    }
                }
            }
            else {
                 //cout<<"s of "<<i<<" "<<s[i]<<endl;
                if(i-x>=0) {
                     if(v[i-x] == 1) {
                        valid = false;
                        break;
                     }
                    v[i-x] = 0;
                }
                if(i+x<n) {
                    v[i+x] = 0;
                }
            }
       }
       if(valid) {
            cout<<n<<endl;
            cout<<"YES\n";
            string ans="";
            fun(v,ans,x);
            cout<<s<<endl;
            cout<<ans<<endl;
             for(int i=0;i<v.size();i++) {
                if(v[i] == -1) {
                    cout<<0;
                }
                else {
                    cout<<v[i];
                }
              }
              cout<<endl;

       }
       else {
        cout<<-1<<endl;
       }

  }
}

/*
11111000000011001100110000010101100001011110011001111001110111110010110111111111111111001011011101110111011111111101011111011001001001100100000010000101000100110
39
11110011001111001110111110010110111111111111111001011011101110111011111111101011111011001001001100100000010000101000100110000000000000000000000000000000000000000
11110011001111001110111110010110111111111111000000011001100110000010101100001011110011001001001100100000010000101000100110111001011011101110111011111111101011111*/

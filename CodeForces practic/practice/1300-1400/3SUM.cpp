



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool findThree(int n,map<int,int>mp,int l,int r) {

    int sum = 0;
    for(int i=0;i<10;i++) {
        if(mp.find(i)!=mp.end()) {
            if(mp[i]!=0) {
                sum+=i;
                mp[i]--;
            }
            else {
                continue;
            }
            for(int j=0;j<10;j++) {
               if(mp.find(j)!=mp.end()) {
                    if(mp[j]!=0) {
                        sum+=j;
                        mp[j]--;
                    }
                    else {
                        continue;
                    }
                    for(int k=0;k<10;k++) {
                        if(mp.find(k)!=mp.end()) {
                        if(mp[k]!=0) {
                            sum+=k;
                            mp[k]--;
                        }
                        else {
                            continue;
                        }
                       // cout<<i<<" "<<j<<" "<<k<<" "<<sum<<" "<<n<<endl;
                        if((sum%10)==n) {
                            return true;
                        }
                        sum-=k;
                        mp[k]++;
                    }

               }
               sum-=j;
                mp[j]++;
            }

        }
        sum-=i;
            mp[i]++;
    }
 }
 return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) {
     int n;
     cin>>n;
     int arr[n];
     map<int,int>mp;
     for(int i=0;i<n;i++) {
        cin>>arr[i];
        mp[arr[i]%10]+=1;
     }
     /*for(auto x:mp) {
        cout<<x.first<<" "<<x.second<<endl;
     }
     cout<<endl;*/
    bool valid = findThree(3,mp,0,n-1);

     if(valid) {
        cout<<"YES\n";
     }
     else
        cout<<"NO\n";

}
}

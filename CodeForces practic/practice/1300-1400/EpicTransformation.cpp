#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll arr[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++) {
            cin>>arr[i];
            mp[arr[i]]++;

        }
        priority_queue<pair<ll,ll>>pq;
        for(auto x:mp) {
            pair<ll,ll>p = {x.second,x.first};
            pq.push(p);
        }
        bool valid = true;
        int sz = n;
        while(valid && pq.size()>=2) {
            pair<ll,ll>a = pq.top();
            pq.pop();
            pair<ll,ll>b = pq.top();
            pq.pop();
            a.first--;
            b.first--;
            sz-=2;
            if(a.first != 0) {pq.push(a);}
            if(b.first != 0) {pq.push(b);}
        }

       cout<<sz<<endl;
    }
}

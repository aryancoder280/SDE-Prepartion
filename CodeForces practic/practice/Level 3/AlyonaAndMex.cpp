#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b) {

    return (a.second-a.first) <= (b.second,b.first);
}
int main() {

    int n,m;
    cin>>n>>m;
    vector<int>v(n,-1);
    vector<pair<int,int> >subarray;
    for(int i=0;i<m;i++) {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        subarray.push_back({l,r});
    }
    sort(subarray.begin(),subarray.end(),comp);
    pair<int,int>p = subarray[0];
    cout<<1 + (p.second-p.first)-1<<endl;
    int ind = p.first+1;
    v[p.first] = 0;
    v[p.second] = 1;
    int val = 2;
    while(ind<p.second) {
        v[ind++] = val++;
    }

}

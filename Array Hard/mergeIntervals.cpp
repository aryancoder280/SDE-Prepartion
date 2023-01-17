#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
      vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         vector<pair<int,int> >vp;
         for(int i=0;i<intervals.size();i++) {
             pair<int,int>p;
             p.first = intervals[i][0];
             p.second = intervals[i][1];
             vp.push_back(p);
         }
         sort(vp.begin(),vp.end());
         vector<vector<int>>ans;
         int i=0;
         int n = vp.size();
         int start = -1;
         int end = -1;
         while(i<vp.size()) {
             if(start == -1) {
                 start = vp[i].first;
                 end = vp[i].second;
             }
            //cout<<i<<" "<<start<<" "<<end<<endl;
             if(i+1<n && end<vp[i+1].first) {
                 vector<int>temp;
                 temp.push_back(start);
                 temp.push_back(end);
                 ans.push_back(temp);
                 start = -1;
                 end = -1;
                 temp.clear();
             }
             else if(i+1<n && end>=vp[i+1].first) {
                 if(end<vp[i+1].second) {
                    end = vp[i+1].second;
                 }
             }
            i++;
         }
         if(start!=-1) {
             vector<int>temp;
             temp.push_back(start);
             temp.push_back(end);
             ans.push_back(temp);
             start = -1;
             end = -1;
             temp.clear();
         }
         return ans;

    }
};

int main() {

    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        vector<int>vp;
        vp.push_back(x);
        vp.push_back(y);
        v.push_back(vp);
        vp.clear();
    }
    Solution obj;
    vector<vector<int>>ans = obj.overlappedInterval(v);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}

// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int> > ans;
        set<vector<int> > unique;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-3;i++) {
            for(int j=i+1;j<n-2;j++) {
                int l = j+1, r = n-1;
                while(l<r) {
                    int sum = arr[i] + arr[j] + arr[l] + arr[r];
                    if(sum == k) {
                        vector<int>v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[l]);
                        v.push_back(arr[r]);
                        unique.insert(v);
                        v.clear();
                        l++;
                    }
                    else if(sum<k) {
                        l++;
                    }
                    else {
                        r--;
                    }
                }
            }
        }
        for(auto x:unique) {
            ans.push_back(x);
        }
        return ans;
    }
};

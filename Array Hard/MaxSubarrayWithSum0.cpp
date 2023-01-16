/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {
        unordered_map<int,int>mp;
        int sum = 0,subarray = 0;
        for(int i=0;i<n;i++) {
            sum+=arr[i];
            if(sum == 0) {
                subarray = i+1;
            }
            else if(mp.find(sum) != mp.end()) {
                int diff = i-mp[sum];
                subarray = max(subarray,diff);
            }
            else {
                mp[sum] = i;
            }
        }
        if(sum == 0) {
            return n;
        }
        return subarray;
    }
};

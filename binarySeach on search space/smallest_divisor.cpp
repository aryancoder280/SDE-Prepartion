// User function Template for C++

class Solution {
  public:
    int smallestDivisor(vector<int>& nums, int k) {

        int low = 1,high =1;
        for(int i=0;i<nums.size();i++) {
            high = max(high,nums[i]);
        }
        int ans = -1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            int count = 0;
            for(int i=0;i<nums.size();i++) {
                count += ceil((double)nums[i]/mid);
            }
            if(count<=k) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};

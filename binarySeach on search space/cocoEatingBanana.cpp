class Solution {
  public:
    int Solve(int n, vector<int>& piles, int h) {
         int low = 1,high = 1;
        int ans = -1;
        for(int i=0;i<n;i++) {
            high = max(high,piles[i]);
        }
        while(low<=high) {
            long long int mid = low + (high-low)/2;
            int totalHours = 0;
            for(int i=0;i<n;i++) {
                totalHours = totalHours + ceil((double)piles[i]/mid);
            }
            // cout<<mid<<" "<<totalHours<<endl;
            if(totalHours<=h) {
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

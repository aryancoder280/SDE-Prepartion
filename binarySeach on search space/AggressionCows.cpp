// User function Template for C++

class Solution {
public:
    bool fill(vector<int>stalls,int count,int diff,int k) {
        int  i=0,j=1;
        while(j<stalls.size()) {
            if(stalls[j]-stalls[i]>=diff) {
                count++;
                i = j;
            }
            j++;
        }
        if(count<k) {
            return false;
        }
        return true;

    }
    int solve(int n, int k, vector<int> &stalls) {

        sort(stalls.begin(),stalls.end());
        int low = 1;
        int high = stalls[n-1]-stalls[0];
        int ans = 0;
        while(low<=high) {
            int mid = low + (high-low)/2;
           // cout<<low<<" "<<high<<" "<<mid<<endl;
            int count =0;
            if(fill(stalls,1,mid,k)) {
                ans = mid;
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return ans;
    }
};

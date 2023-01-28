//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int N, int D) {
        int low = 1,high = 0;
        for(int i=0;i<N;i++) {
            low = max(low,arr[i]);
            high+=arr[i];
        }
        int ans = 0;
        // cout<<low<<" "<<high<<endl;
        while(low<=high) {
            int mid = low+ (high-low)/2;
            int temp = mid,days=0;
            for(int i=0;i<N;i++) {
                if(temp == mid && arr[i]>temp) {
                    days = INT_MAX;
                    break;
                }
                else if(arr[i]>temp) {
                    days++;
                    temp = mid;
                    i--;
                }
                else {
                    temp-=arr[i];
                }
            }
            if(temp!=mid) {
                days++;
            }
            if(days<=D) {
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

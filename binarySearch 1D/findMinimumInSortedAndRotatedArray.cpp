class Solution{
public:
    int findMin(int arr[], int n){
        int l = 0,r = n-1;
        int lowest = INT_MAX;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(arr[mid]<=arr[r]) {
                lowest = min(lowest,arr[mid]);
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return lowest;
    }
};


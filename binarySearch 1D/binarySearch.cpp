
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l=0,r=n-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(arr[mid] == k) {
                return mid;
            }
            else if(arr[mid]<k) {
                l = mid+1;
            }
            else {
                r = mid-1;
            }
        }
        return -1;
    }
};

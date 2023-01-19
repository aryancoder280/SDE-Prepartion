class Solution {
  public:
    bool Search(int N, vector<int>& arr, int key) {

        int l = 0,r = arr.size()-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(arr[mid] == key) {
                return true;
            }
            else if(arr[l] == arr[mid] && arr[mid] == arr[r]) {
                l++;
                r--;
            }
            else if(arr[l]<=arr[mid]) {
               if(arr[l]<=key && key<=arr[mid]) {
                   r = mid;
               }
               else {
                   l = mid+1;
               }
            }
            else {
               if(arr[mid]<=key && key<=arr[r]) {
                   l = mid;
               }
               else {
                   r = mid-1;
               }
            }
        }
        return false;
    }
};

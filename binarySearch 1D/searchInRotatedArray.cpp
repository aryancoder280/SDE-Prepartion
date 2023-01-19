class Solution{
    public:
    int search(int arr[], int l, int r, int key){

        while(l<=r) {
            int mid = l + (r-l)/2;
            if(arr[mid] == key) {
                return mid;
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
        return -1;
    }
};


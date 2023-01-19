class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int l = 0,r=n-1;
        if(arr[l])
        while(r-l>1) {
            int mid = l + (r-l)/2;
            if(arr[mid]<k) {
                l = mid+1;
            }
            else {
                r = mid;
            }
        }
        if(arr[l]>=k) {
            return l;
        }
        else if(arr[r]>=k) {
            return r;
        }
        else {
            if(k<arr[0]) {
                return 0;
            }
            else {
                return n;
            }
        }
    }
};

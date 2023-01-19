class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int l = 0,r = n-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(mid&1) {
                if(arr[mid] == arr[mid-1]) {
                    l = mid+1;
                }
                else if(arr[mid] == arr[mid+1]) {
                    r = mid-1;
                }
                else {
                    return arr[mid];
                }
            }
            else {
                if(mid+1<n && mid-1>0) {
                    if(arr[mid] == arr[mid+1]) {
                     l = mid+2;
                    }
                    else if(arr[mid] == arr[mid-1]) {
                        r = mid-2;
                    }
                    else {
                        return arr[mid];
                    }
                }
                else {
                    return arr[mid];
                }
            }
        }
    }
};


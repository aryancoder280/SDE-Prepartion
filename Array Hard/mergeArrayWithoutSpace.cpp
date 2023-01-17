 class Solution
 {
     public:
        //Function to merge the arrays.
        void insert(long long arr[],int ind) {
            int l = 0;
            int val = arr[ind];
            int r = ind-1;
            while(l<r) {
                int mid = l + (r-l)/2;
                if(arr[mid]>val) {
                    r = mid-1;
                }
            }
            return;
        }
        void merge(long long arr1[], long long arr2[], int n, int m)
        {
            int i=n-1,j=m-1;
            while(j>=0 && i>=0) {
                if(arr1[i]<=arr2[j]) {
                    j--;
                }
                else {
                    swap(arr1[i],arr2[j]);
                    insert(arr1,n-1);
                    j--;
                }
            }
        }
 };

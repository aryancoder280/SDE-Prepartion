class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int mergeNew(long long arr[],long long l,long long r,long long mid) {
        long long temp[r-l+1] = {0};
        long long  i=l,j=mid+1,k=0,count=0;
        while(i<=mid && j<=r) {
            if(arr[i]<=arr[j]) {
                temp[k++] = arr[i++];
            }
            else {
                // cout<<"inversion = "<<arr[i]<<" "<<arr[j]<<" "<<j-i<<endl;
                temp[k++] = arr[j++];
                count = count + mid-i+1;
            }
        }
        while(i<=mid) {
            temp[k++] = arr[i++];
        }
        while(j<=r) {
            temp[k++] = arr[j++];
        }
        for(int i=0;i<k;i++) {
            arr[l+i] = temp[i];
        }
        return count;
    }
    long long int mergeSortNew(long long arr[], long long l, long long r) {
        if(l>=r) {
            return 0;
        }
        else {
            long long mid = l + (r-l)/2;
           long long left =  mergeSortNew(arr,l,mid);
            long long right = mergeSortNew(arr,mid+1,r);
            long long sum = left + right + mergeNew(arr,l,r,mid);
            return sum;
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {

        return mergeSortNew(arr,0,N-1);
    }

};

class Solution{
  public:
    long long int mergeNew(vector<int>&arr,long long int l,long long int r,long long int mid) {
        long long int temp[r-l+1] = {0};
        long long  int i=l,j=mid+1,k=0,count=0;
        long long int value[r-mid] = {0};

        for(int ind = 0;ind<(r-mid);ind++) {
            value[ind] = (long long int)2 * (long long int)arr[ind+mid+1];
        }
        long long int ind = 0;
        int left = l;
        while(left<=mid && ind<r-mid) {
            if(arr[left]>value[ind]) {
                count+=mid-left+1;
                ind++;
            }
            else {
                left++;
            }
        }
        while(i<=mid && j<=r) {
            if(arr[i]<=arr[j]) {
                temp[k++] = arr[i++];
            }
            else {
                temp[k++] = arr[j++];
            }
        }
        while(i<=mid) {
            temp[k++] = arr[i++];
        }
        while(j<=r) {
            temp[k++] = arr[j++];
        }
        for(long long int  i=0;i<k;i++) {
            arr[l+i] = temp[i];
        }
        return count;
    }
    long long int mergeSortNew(vector<int>&arr, long long int l, long long int r) {
        if(l>=r) {
            return 0;
        }
        else {
            long long int mid = l + (r-l)/2;
           long long int left =  mergeSortNew(arr,l,mid);
            long long int right = mergeSortNew(arr,mid+1,r);
            long long int sum = left + right + mergeNew(arr,l,r,mid);
            return sum;
        }
    }
    int countRevPairs(int n, vector<int> arr)
    {

        return mergeSortNew(arr,0,n-1);
    }
};

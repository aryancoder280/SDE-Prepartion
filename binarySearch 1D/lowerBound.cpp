class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){

       long long l = 0,r = n-1;
       while(r-l>1) {
           int mid = l + (r-l)/2;
           if(arr[mid] <= x) {
               l = mid;
           }
           else {
               r = mid-1;
           }
       }
       if(arr[r]<=x) {
           return r;
       }
       else if(arr[l]<=x) {
           return l;
       }
       else {
           return -1;
       }

    }
};

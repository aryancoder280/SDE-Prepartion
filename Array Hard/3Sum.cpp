//User function Template for C++

class Solution{
    public:
    int closest3Sum(int arr[], int n, int x)
    {
        sort(arr,arr+n);
        int diff = INT_MAX,large = INT_MIN;
        for(int i=0;i<n-2;i++) {
            int sum = 0;
            int j=i+1,k=n-1;
            while(j<k) {
                sum = arr[i] + arr[j] + arr[k];
                int d = abs(x-sum);
                if(d<diff) {
                    diff = d;
                    large = sum;
                }
                else if(d == diff && large<sum) {
                    large = sum;
                }
                if(sum>x) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }
        return large;
    }
};

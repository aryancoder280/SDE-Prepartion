class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array


    //Remember Case when M == 0
    int findZeroes(int arr[], int n, int m) {
       int i=0,j=0;
       int one = 0,ans = 0;
       bool zero = false;
       if(m == 0) {
           zero = true;
       }
       while(j!=n) {
           if(arr[j] == 1) {
               one++;
               ans = max(ans,one);
               j++;
           }
           else if(arr[j] == 0) {

               if(m) {
                   one++;
                   ans = max(ans,one);
                   m--;
                   arr[j] = -1;
                   j++;
               }
               else if(!zero) {
                   while(i<j && !m) {
                       if(arr[i] == -1) {
                           m++;
                           arr[i] = 0;
                       }
                       one--;
                       i++;
                   }
               }
               else {
                   j++;
                   i=j;
                   one = 0;
               }
           }
       }
       return ans;
    }
};

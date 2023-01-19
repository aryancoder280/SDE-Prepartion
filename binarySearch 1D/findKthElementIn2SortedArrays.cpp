class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,value = -1;
        k--;
        while(i<n && j<m) {
            if(arr1[i]<=arr2[j]) {
                k--;
                if(k < 0) {
                   return arr1[i];
                }
                i++;
            }
            else {
                k--;
                if(k < 0) {
                    return arr2[j];
                }
                j++;
            }
        }
        while(i<n) {
            k--;
            if(k<0) {
                return arr1[i];
            }
            i++;
        }
        while(j<m) {
            k--;
            if(k<0) {
                return arr2[j];
            }
            j++;
        }
    }
};

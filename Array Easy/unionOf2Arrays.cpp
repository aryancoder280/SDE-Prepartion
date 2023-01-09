class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>unionArray;
        int i=0,j=0;
        while(i<n && j<m) {
            if(arr1[i]<arr2[j]) {
                if(unionArray.size() == 0 || unionArray[unionArray.size()-1]!=arr1[i])
                    unionArray.push_back(arr1[i]);
                i++;
            }
            else if(arr2[j]<arr1[i]) {
                if(unionArray.size() == 0 || unionArray[unionArray.size()-1]!=arr2[j])
                    unionArray.push_back(arr2[j]);
                j++;
            }
            else if(arr1[i] == arr2[j]) {
                if(unionArray.size() == 0 ||unionArray[unionArray.size()-1]!=arr1[i])
                    unionArray.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n) {
            if(unionArray.size() == 0 || unionArray[unionArray.size()-1]!=arr1[i])
                unionArray.push_back(arr1[i]);
            i++;
        }
        while(j<m) {
            if(unionArray.size() == 0 || unionArray[unionArray.size()-1]!=arr2[j])
                unionArray.push_back(arr2[j]);
            j++;
        }
        return unionArray;
    }
};

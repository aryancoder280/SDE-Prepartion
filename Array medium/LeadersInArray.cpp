class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>v;
        int i=n-1;
        int largest = a[i];
        while(i>=0) {
            if(largest<=a[i]) {
                largest = a[i];
                v.push_back(largest);
            }
            i--;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

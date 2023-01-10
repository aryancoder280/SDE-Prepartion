class Solution{
    public:
    bool search(int b[],int val,int m) {
        int l=0,r=m-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(b[mid] == val){
                return true;
            }
            else if(b[mid]>val) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return false;
    }
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        vector<pair<int,int>>ans;
        sort(a,a+n);
        sort(b,b+m);
        for(int i=0;i<n;i++) {
            int diff = x-a[i];
            if(search(b,diff,m)) {
                ans.push_back({a[i],diff});
            }
        }
        return ans;

    }
};

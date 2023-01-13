class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int u=0,r = m,d = n,l = -1;
        int i=0,j=0;
        while(k) {
            //right
        while(j<r) {
            k--;
            if(!k) {
                return a[i][j];
            }
            j++;
        }
        k++;
        j--;
        r--;
        //down
        while(i<d) {
            k--;
            if(!k) {
                return a[i][j];
            }
            i++;
        }
        k++;
        i--;
        d--;
        //left
        while(j>l) {
            k--;
            if(!k) {
                return a[i][j];
            }
            j--;
        }
        k++;
        j++;
        l++;
        //up
        while(i>u) {
             k--;
            if(!k) {
                return a[i][j];
            }
            i--;
        }
        k++;
        i++;
        u++;
        }

}

};

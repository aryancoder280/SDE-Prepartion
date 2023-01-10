class Solution{
public:
	int matSearch (vector <vector <int>> &mat, int n, int m, int x)
	{
	    int i=0,j=m-1;
	    while(i!=n && j!=m && i >= 0 && j >= 0) {
	        if(mat[i][j]<x) {
	            i++;
	        }
	        else if(mat[i][j]>x) {
	            j--;
	        }
	        else {
	            return 1;
	        }
	    }
	    return 0;
	}
};

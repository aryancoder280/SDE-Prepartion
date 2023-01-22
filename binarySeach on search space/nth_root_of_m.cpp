class Solution{
	public:
	int NthRoot(int n, int m)
	{
	   long long int low = 1, high = m;
	   while(low<=high) {
	       long long int mid = low + (high-low)/2;
	       long long int tempAns = mid;
	       int power = n-1;
	       while(mid<=m && power) {
	           mid*=tempAns;
	           power--;
	       }
	       //cout<<mid<<" "<<tempAns<<endl;
	       if(mid == m) {
	           return tempAns;
	       }
	       else if(mid>m) {
	           high = tempAns-1;
	       }
	       else {
	           low = tempAns+1;
	       }
	   }
	   return -1;
	}
};

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   int i=0,j=0;
	   while(j<n) {
	       if(arr[j] == 0) {
	           j++;
	       }
	       else {
	           swap(arr[i],arr[j]);
	           i++;
	           j++;
	       }
	   }
	}
};

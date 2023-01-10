//User function template for C++
class Solution{
public:
	int search(int arr[], int N){
	   int i=0,j=N-1;
	   while(i<=j) {

	       int mid = i + (j-i)/2;
	       //cout<<i<<" "<<j<<" "<<mid<<endl;?
	       if(i == j) {
	           return arr[mid];
	       }
	       else if(mid&1) {
	           if(arr[mid] == arr[mid-1]) {
	               i = mid+1;
	           }
	           else {
	               j = mid;
	           }
	       }
	       else {
	           if(arr[mid] == arr[mid+1]) {
	               i = mid+1;
	           }
	           else {
	               j = mid;
	           }
	       }
	   }
	}
};

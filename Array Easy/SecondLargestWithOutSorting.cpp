class Solution{
public:
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int count[100001] = {0};
	    for(int i=0;i<n;i++) {
	        count[arr[i]]++;
	    }
	    int largest=-1,secondLargest = -1;
	    for(int i=100000;i>=0;i--) {
	        if(count[i]!=0) {
	            if(largest==-1) {
	                largest = i;
	            }
	            else{
	                secondLargest = i;
	                break;
	            }
	        }
	    }
	    return secondLargest;
	}
};

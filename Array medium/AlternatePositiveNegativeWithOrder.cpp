//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>positive,negative;
	    for(int i=0;i<n;i++) {
	        if(arr[i]>=0) {
	            positive.push_back(arr[i]);
	        }
	        else {
	            negative.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0;
	    while(i<positive.size() && j<negative.size()) {
	        if(i == j) {
	            arr[k++] = positive[i++];
	        }
	        else {
	            arr[k++] = negative[j++];
	        }
	    }
	    while(i<positive.size()) {
	        arr[k++] = positive[i++];
	    }
	    while(j<negative.size()) {
	        arr[k++] = negative[j++];
	    }
	}
};

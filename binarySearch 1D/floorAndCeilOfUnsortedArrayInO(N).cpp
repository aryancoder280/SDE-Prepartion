pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int f = -1;
    int s = INT_MAX;
    for(int i=0;i<n;i++) {
        if(x>arr[i]) {
            f = max(f,arr[i]);
        }
        else if(x<arr[i]){
            s = min(s,arr[i]);
        }
        else {
            f = s = arr[i];
            break;
        }
    }
    if(s == INT_MAX) {
        s = -1;
    }
    pair<int,int>ans;
    ans.first = f;
    ans.second = s;
    return ans;
}

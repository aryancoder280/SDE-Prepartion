#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fun(vector<int> arr,int i,int n,vector<int>&dp) {
    if(i >= n) {
        return 0;
    }
    else if(dp[i] != -1) {
        return dp[i];
    }
    else {
         return dp[i] = max(fun(arr,i+1,n,dp), arr[i] + fun(arr,i+2,n,dp));
    }
}
int main() {

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>dp(n+1,-1);
    cout<<fun(arr,0,n,dp);
}



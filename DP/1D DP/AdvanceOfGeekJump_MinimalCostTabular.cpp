
#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int minimumEnergy(vector<int>&height, int n,int i,vector<int>&dp, int k) {
   if(i == n-1) {
        return 0;
    }
    else if(i>n-1) {
        return INT_MAX;
    }
    else if(dp[i] != -1) {
        return dp[i];
    }
    else {
        int temp = INT_MAX;
        for(int j = i+1;j<n && j<=i+k;j++) {
            int diff = abs(height[i]-height[j]) + minimumEnergy(height,n,j,dp,k);
            temp = min(temp,diff);
        }
        return dp[i] = temp;

    }
}
int main() {

    int n,k;
    cin>>n>>k;
    vector<int>height;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        height.push_back(x);
    }
    vector<int>dp(n+1,-1);
    dp[n-1] = 0;
    for(int i=n-2;i>=0;i--) {
        int temp =INT_MAX;
        for(int j = i+1;j<n&& j<= i+k;j++) {
            int diff = abs(height[i]-height[j]) + dp[j];
            temp = min(temp,diff);
        }
        dp[i] = temp;
    }
    cout<<dp[0];
}



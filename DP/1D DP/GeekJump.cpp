#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int minimumEnergy(vector<int>&heights, int n,int i,vector<int>&dp) {
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
        int a,b;
        a = b = INT_MAX;
        if(i+1<n) {
            a = abs(heights[i]-heights[i+1]) + minimumEnergy(heights,n,i+1,dp);
        }
        if(i+2<n) {
            b = abs(heights[i]-heights[i+2]) + minimumEnergy(heights,n,i+2,dp);
        }
        return dp[i] =  min(a,b);
    }
}
int main() {

    int n;
    cin>>n;
    vector<int>heights;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        heights.push_back(x);
    }
    vector<int>dp(n+1,-1);
    dp[n-1] = 0;
    dp[n-2] = dp[n-1] + abs(heights[n-2] - heights[n-1]);
    for(int i=n-3;i>=0;i--) {
        int a = abs(heights[i]-heights[i+1]) + dp[i+1];
        int b = abs(heights[i]-heights[i+2]) + dp[i+2];
        dp[i]=min(a,b);
    }
    cout<<dp[0];
}


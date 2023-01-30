#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int countWays(int n,vector<int>&dp) {
    if(n <= 1) {
        return 1;
    }
    else if(n<0) {
        return 0;
    }
    else if(dp[n]!=-1) {
        return dp[n];
    }
    else {
        return dp[n] = (countWays(n-1,dp)%M + countWays(n-2,dp)%M)%M;
    }
}
int main() {

    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<countWays(n,dp);
}


#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
    cout<< dp[0];
}


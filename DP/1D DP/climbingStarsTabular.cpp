#define M 1000000007
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {

    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0] = dp[1] = 1;
    for(int i=2;i<=n;i++) {
        dp[i] = (dp[i-1]%M + dp[i-2]%M)%M;
    }
    cout<<dp[n]<<endl;
}


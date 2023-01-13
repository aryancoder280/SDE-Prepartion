
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<ll>v[n+1];
        vector<ll>ans;

        if(n == 1) {
            ans.push_back(1);
            return ans;
        }
        if(n == 2) {
            ans.push_back(1);
            ans.push_back(1);
            return ans;
        }
        v[0].push_back(0);
        v[1].push_back(1);
        v[2].push_back(1);
        v[2].push_back(1);
        for(int i=3;i<=n;i++) {
            ll k=i;
            ll j=0;
            v[i].push_back(1);
            j++;
            k--;
            while(k>1){
                ll sum = (v[i-1][j]+v[i-1][j-1])%1000000007;
                v[i].push_back(sum);
                j++;
                k--;
            }
            v[i].push_back(1);
            j++;
        }
        for(int i=0;i<v[n].size();i++) {
            ans.push_back(v[n][i]);
        }
        return ans;
    }
};

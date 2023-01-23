class Solution {
  public:
    int solve(int m, int k, vector<int> &bloomDay){
      int low = 1, high = 1;
      for(int i=0;i<bloomDay.size();i++) {
          high = max(high,bloomDay[i]);
      }
      long long int total = m*k;
      int ans = -1;
      if(total>bloomDay.size()) {
          return ans;
      }
      while(low<=high) {
          int flowers = 0, bouquet = 0;
          int adj = 0;
          int mid = low + (high-low)/2;
          for(int i=0;i<bloomDay.size();i++) {
              if(bloomDay[i] <= mid) {
                  adj++;
              }
              else {
                 adj = 0;
              }
              if(adj==k) {
                  flowers++;
                  adj = 0;
              }
          }
          if(flowers<m) {
              low = mid+1;
          }
          else {
              ans = mid;
              high = mid-1;
          }
      }

      return ans;
    }
};

class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        int num1 = -1, num2 = -1, c1=0,c2 = 0;
        int i=0;
        while(i<n) {
            int ele = nums[i];
            if(ele == num1) {
                c1++;
            }
            else if(ele == num2) {
                c2++;
            }
            else if(c1 == 0) {
                num1 = ele;
                c1 = 1;
            }
            else if(c2 == 0) {
                num2 = ele;
                c2 = 1;
            }
            else {
                c1--;
                c2--;
            }
            i++;
        }
        vector<int>ans;
        c1 = 0,c2 = 0;
        for(int i=0;i<n;i++) {
            if(nums[i] == num1) {
                c1++;
            }
            else if(nums[i] == num2) {
                c2++;
            }
        }
        int majority = floor(n/3);
        if(c1>majority) {
            ans.push_back(num1);
        }
        if(c2>majority) {
            ans.push_back(num2);
        }
        if(ans.size() == 0) {
            ans.push_back(-1);
        }
        return ans;
    }
};

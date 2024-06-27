class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n);
        int e=0;
        int o=1;
        for(int i=0;i<n;i++){
            if (nums[i]>0)
                ans[e]=nums[i],e+=2;
            else 
                ans[o]=nums[i],o+=2;
        }
        return ans;
    }
};
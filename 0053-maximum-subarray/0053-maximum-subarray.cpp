class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=nums[0];
        int r=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            s=max(nums[i],s+nums[i]);
                if(s>r) r=s;
        }
        return r;
    }
};
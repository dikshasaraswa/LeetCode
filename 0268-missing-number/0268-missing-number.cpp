class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //
         for (int i = 0; i < n; ++i) {
            if (nums[i] != i) {
                return i;
            }
        }

        // If no missing number found, return the next number after the last index
        return n;
     }
};
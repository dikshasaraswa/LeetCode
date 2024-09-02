class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long miss = 1;  // The smallest number that we can't form yet
        int patches = 0;     // Number of patches added
        int i = 0;

        while (miss <= n) {
            if (i < nums.size() && nums[i] <= miss) {
                // If the current number in the array can help us reach `miss`, use it.
                miss += nums[i];
                i++;
            } else {
                // Otherwise, patch the array by adding `miss` itself.
                miss += miss;
                patches++;
            }
        }

        return patches;
    }
};

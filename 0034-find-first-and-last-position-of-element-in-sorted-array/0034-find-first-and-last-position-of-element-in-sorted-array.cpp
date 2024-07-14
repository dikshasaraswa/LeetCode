class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a = {-1, -1};
        int n = nums.size();
        
        if (n == 0) return a;

        // Find the first occurrence of target
        int start = 0, end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                a[0] = mid;
                end = mid - 1;  // Continue to search in the left half
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        // Find the last occurrence of target
        start = 0, end = n - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                a[1] = mid;
                start = mid + 1;  // Continue to search in the right half
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return a;
    }
};

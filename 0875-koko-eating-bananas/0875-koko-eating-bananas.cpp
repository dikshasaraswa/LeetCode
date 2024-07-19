class Solution {
public:
    // Function to find the maximum value in the piles
    int findMax(const vector<int> &piles) {
        return *max_element(piles.begin(), piles.end());
    }

    // Function to calculate the total hours needed to eat all piles at a given speed
    long long totalHours(const vector<int> &piles, int speed) {
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + speed - 1) / speed; // Corrected the calculation
        }
        return totalHours;
    }

    // Function to find the minimum eating speed to finish all piles within h hours
    int minEatingSpeed(vector<int> &piles, int h) {
        // Binary search setup
        int l = 1;
        int hi = findMax(piles);
        int ans = hi;
        
        while (l <= hi) {
            int mid = l + (hi - l) / 2;
            if (totalHours(piles, mid) <= h) {
                ans = mid;
                hi = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        return ans;
    }
};


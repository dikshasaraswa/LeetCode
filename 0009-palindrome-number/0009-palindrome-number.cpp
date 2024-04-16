class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers are not palindromes
        }

        int originalNum = x;
        long long reversedNum = 0; // Use long long to handle larger values

        while (x > 0) {
            int digit = x % 10;
            reversedNum = reversedNum * 10 + digit;

            // Check for potential overflow
            if (reversedNum > INT_MAX) {
                return false;
            }

            x /= 10;
        }

        return originalNum == reversedNum;
    }
};

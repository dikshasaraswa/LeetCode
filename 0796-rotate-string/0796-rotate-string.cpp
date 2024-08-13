class Solution {
public:
    bool rotateString(string s, string goal) {
        // If the lengths are different, it's impossible for s to become goal
        if (s.length() != goal.length()) {
            return false;
        }
        
        // Concatenate s with itself
        string doubled = s + s;
        
        // Check if goal is a substring of the concatenated string
        return doubled.find(goal) != string::npos;
    }
};
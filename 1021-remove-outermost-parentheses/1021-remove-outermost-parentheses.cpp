class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int open = 0; // to keep track of open parentheses count

        for (char c : s) {
            if (c == '(') {
                if (open > 0) {
                    result += c;
                }
                open++;
            } else if (c == ')') {
                open--;
                if (open > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};

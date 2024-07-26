class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = s.length() - 1;
        string temp = "";
        string ans = "";
        
        while (l <= r) {
            char ch = s[l];
            if (ch != ' ') {
                temp += ch;
            } else {
                if (!temp.empty()) {
                    if (!ans.empty()) ans = temp + ' ' + ans;
                    else ans = temp;
                    temp = "";
                }
            }
            l++;
        }
        
        if (!temp.empty()) {
            if (!ans.empty()) ans = temp + ' ' + ans;
            else ans = temp;
        }
        
        return ans;
    }
};

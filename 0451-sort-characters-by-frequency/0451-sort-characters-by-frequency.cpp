
class Solution {
public:
    string frequencySort(string s) {
        // Create a frequency map to count occurrences of each character
        unordered_map<char, int> frequency;
        for (char c : s) {
            frequency[c]++;
        }

        // Create a vector of pairs (character, frequency)
        vector<pair<char, int>> freqVec(frequency.begin(), frequency.end());

        // Sort the vector based on frequency in descending order
        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        // Build the result string
        string result;
        for (const auto& p : freqVec) {
            result.append(p.second, p.first);  // Append character p.second times
        }

        return result;
    }
};
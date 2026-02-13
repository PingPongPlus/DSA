class Solution {
public:
    int longestBalanced(string s) {
        int maximum = 0;

        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> Map;

            for (int j = i; j < s.size(); j++) {
                bool valid = true;
                Map[s[j]]++;
                auto it = Map.begin();
                int freq = it->second;
                for (const auto& pair : Map) {
                    if (pair.second != freq) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    maximum = max(maximum, j - i + 1);
                }
            }
        }
        return maximum;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        if(s.length() != t.length()) return false;

        for(int i = 0; i < s.length(); i++) {
            count[s[i]]++; // add frequency for s
            count[t[i]]--; // add frequency for t
        }

        for(auto it: count) {
            if(it.second != 0) {
                return false;
            }
        }

        return true;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(const string& word: strs) {
            vector<int> charCount(26,0);
            for(char ch : word) {
                int index = ch - 'a';
                charCount[index]++;
            }

            string key = "";

            for(int i = 0; i < 26; i++) {
                key = key + "#";
                key = key + to_string(charCount[i]);
            }
            mpp[key].push_back(word);
        }

        vector<vector<string>> result;

        for(auto it : mpp) {
            result.push_back(it.second);
        }

        return result;
    }
};

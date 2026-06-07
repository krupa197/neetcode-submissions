class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int i = 0;

        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        while(i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};
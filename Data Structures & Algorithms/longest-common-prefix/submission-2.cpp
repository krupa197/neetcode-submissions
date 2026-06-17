class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string base = strs[0];
        int n = strs.size();
        string ans = "";
        for(int i = 1; i < n; i++) {
            int j = 0;
            while(j < min(base.length(), strs[i].length())) {
                if(base[j] != strs[i][j]) {
                    break;
                }
                j++;
            }
            base = base.substr(0, j);
        }
        return base;
    }
};
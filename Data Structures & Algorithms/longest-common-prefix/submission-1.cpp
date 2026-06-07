class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int totalStrings = strs.size();
        int firstStringLength = strs[0].length();

        for(int col = 0; col < firstStringLength; col++) {
            char referenceChar = strs[0][col];

            for(int row = 1; row < totalStrings; row++) {
                char currentStringLength = strs[row].length();
                char currentChar = strs[row][col];

                bool stringTooShort = (col == currentStringLength);
                bool charMismatch   = (currentChar != referenceChar);

                if (stringTooShort || charMismatch) {
                    return strs[0].substr(0, col);
                }
            }
        }

        return strs[0];
    }
};
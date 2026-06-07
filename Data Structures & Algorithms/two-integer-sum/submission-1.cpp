class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sumMap;

        for(int i = 0; i < nums.size(); i++) {
            int required = target - nums[i];
            if(sumMap.find(required) != sumMap.end()) {
                return {sumMap[required], i};
            }
            sumMap.insert({nums[i], i});
        }
    }
};

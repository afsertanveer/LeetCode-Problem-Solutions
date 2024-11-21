class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        unordered_map<int, int> t;
        for (int i = 0; i < nums.size(); i++) {
            if (t.find(target - nums[i]) != t.end()) {
                auto it = t.find(target - nums[i]);
                result = {i,it->second};
            } else {

                t[nums[i]] = i;
            }
        }

        return result;
    }
};
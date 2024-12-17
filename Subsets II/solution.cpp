class Solution {
public:
    void findSubset(vector<int>& v, vector<int>& s, int index,vector<vector<int>>& result) {
        if (index == v.size()) {
            result.push_back(s);
            return;
        }
        s.push_back(v[index]);
        findSubset(v, s, index + 1,result);
        s.pop_back();
        int c = index + 1;
        for (int i = c; c < v.size(); i++) {
            if (v[c] == v[c - 1]) {
                c++;
            } else {
                break;
            }
        }
        findSubset(v, s, c,result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        findSubset(nums, temp, 0,result);
        return result;
    }
};
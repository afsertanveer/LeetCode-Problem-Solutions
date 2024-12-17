class Solution {
public:
    
    void getPermutation(vector<int>& p, int index, vector<vector<int>>& result) {
        if (index == p.size()) {
            result.push_back(p);
            return;
        }
        for (int i = index; i < p.size(); i++) {
            swap(p[index], p[i]);
            getPermutation(p, index+1, result);
            swap(p[index],p[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        getPermutation(nums,0,result);
        return result ;
    }
};
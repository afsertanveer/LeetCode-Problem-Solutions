    vector<vector<int>> result;
    set<vector<int>>s;
    void sumResult(vector<int>& candidates, int index, int target,
                   vector<int>& comb) {

        if (index == candidates.size()|| target<0) {
            return;
        }
        if (target == 0) {
            if(s.find(comb)==s.end()){
                result.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        comb.push_back(candidates[index]);
        sumResult(candidates,index+1,target-candidates[index],comb);
        sumResult(candidates,index,target-candidates[index],comb);
        comb.pop_back();
        sumResult(candidates,index+1,target,comb);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb = {};
        sumResult(candidates, 0, target, comb);
        return result;
    }
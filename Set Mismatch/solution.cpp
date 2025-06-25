class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> r ;
        map<int,int>m;
        for(int i = 1 ; i<=nums.size() ;i++){
            m[i] = 0 ;
        }
        for(int i = 0 ; i<nums.size() ; i++ ){
            m[nums[i]]++;
        }
        for(auto p : m){
           if(p.second>1){
            r.push_back(p.first);
           }
        }
        for(auto p : m){
           if(p.second==0){
            r.push_back(p.first);
           }
        }
        return r;
    }
};
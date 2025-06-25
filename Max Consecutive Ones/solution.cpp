class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur=0,result=0 ;
        for(int n : nums){
            if(n==1){
                cur++;
                result = max(cur,result);
            }else{
                cur = 0 ;
            }
        }
        return result;
    }
};
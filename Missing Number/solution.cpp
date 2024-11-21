class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int h = nums.size();
        if(h==1) return nums[0]>0? 0 : 1 ;
        int i = 0 ;
        for( i = 1 ; i<nums.size() ; i++ ){
            if(nums[i]-1 != nums[i-1]){
                return i ;
            }
        }
        return nums[0]==0? i : 0 ;
    }
};
# Intuition
Here from the description I can clearly understand I have to find the value of missing number within a range of 0 to number of the element of vector. and I have to find the first missing element,that is more specific. So I thought of traversing the vector and somehow make a condition which provides me the missing number.

# Approach
Whenever I can see I can change input position I always try to improvise / manipulate the data so my solution becomes easier. Here I just sorted the full vector and thus my problems become so easier.

- if the vector size is 1 so the missing number has to be in between 0 and 1 
- If the vector size is more than 1 I just have to check the immediate element is the immediate number or not!
- if it satisfies the condition given above then it is confirm that it is a series of serial numbers. So the missing number within the range[0,n] has to be either 0 or n .

# Complexity
- Time complexity: $$O(n)$$

- Space complexity: $$O(1)$$

# Code
```cpp []
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
```
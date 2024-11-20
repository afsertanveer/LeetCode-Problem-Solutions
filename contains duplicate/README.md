# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Since I could change the input data , it immediately shifted my mind to use sorting and thus the solution became absolutely easy.

# Approach
<!-- Describe your approach to solving the problem. -->
Using sort and just checking the immediate last element is same or not.

# Complexity
- Time complexity: **O(n)**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: **O(1)**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for( int i = 1; i < nums.size() ; i++ ){
            if( nums[i] == nums[i-1]){
                return true ;
            }
        }
        return false ;
    }
};
```
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Most important intuition is its a **sorted array** and there will be no repeated item for a solution. So I though I can implement a two pointer approach to find the solution. 
# Approach
<!-- Describe your approach to solving the problem. -->
**Two pointer approach** where I am just moving the pointer by comparing with the same against the target. If the target is matched I am returning the data else just checking where it s greater or less.

# Complexity
- Time complexity: **O(N)**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->


- Space complexity: **O(1)**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0 , j = nums.size() - 1 ;
        while(i<j){
            if( nums[i] + nums[j] == target ){
                return{ i+1 , j+1 } ;
            }else if( nums[i] + nums[j] < target ){
                i++ ;
            }else{
                j-- ;
            }
        }
        return {} ;
    }
};
```
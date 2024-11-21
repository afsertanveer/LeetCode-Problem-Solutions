# Intuition
My objective is to maintain the $O(n)$ time complexity for this problem, so I have to think a bit dynamically to find the solution. 

# Approach
Here I always know the second value from the current element of the vector while traversing. So I initially calculate the other value for the expected pair and try to check the value inside of the map if the value exists there or not. If the value does not exist I put the element with corresponding index inside of the map so that later when I will need this value to find, I can find easily.

# Complexity
- Time complexity: $$O(n)$$

- Space complexity: $$O(n)$$

# Code
```cpp []
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
```
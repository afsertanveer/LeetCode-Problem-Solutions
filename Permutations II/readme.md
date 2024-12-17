# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Same solution as LeetCode 46 just using set to avoid the duplications.

# Approach
<!-- Describe your approach to solving the problem. -->
Using set to avoid duplicates.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
$$O(N! * N)$$

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(N)$$

# Code
```cpp []
class Solution {
public:
    void getPermutation(vector<int>& p, int index,
                        vector<vector<int>>& result) {
        if (index == p.size()) {
            result.push_back(p);
            return;
        }
        unordered_set<int> s;
        for (int i = index; i < p.size(); i++) {
            if (s.find(p[i]) != s.end())
                continue;
            s.insert(p[i]);
            swap(p[i], p[index]);
            getPermutation(p, index + 1, result);
            swap(p[i], p[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        getPermutation(nums, 0, result);
        return result;
    }
};
```
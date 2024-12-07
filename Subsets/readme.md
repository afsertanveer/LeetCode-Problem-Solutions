
# Approach
Backtracking and recursion related problem

# Complexity
- Time complexity:
$$O(n * 2 ^n)$$ 

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
$$O(n * 2 ^n)$$ 

# Code
```cpp []
class Solution {
public:
    vector<vector<int>> result;
    void findSubset(vector<int>& v, vector<int>& s, int index) {
        if (index >= v.size()) {
            result.push_back({s});
            return;
        }
        s.push_back(v[index]);
        findSubset(v, s, index + 1);
        s.pop_back();
        findSubset(v, s, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        findSubset(nums, temp, 0);
        return result;
    }
};
```
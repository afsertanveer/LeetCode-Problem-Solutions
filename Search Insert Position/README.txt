# Intuition
Since it is sorted, my first thought come to use Binary search and obviously modifiedly.

# Approach
Using the concept of Binary search , if I let the procedure make happen, the start will be the closest of the index for the insert position. By doing the dry run on notebook, I just find everytime after the execution, start index becomes the inserting point.

# Complexity
- Time complexity:$$O(logn)$$ 

- Space complexity: $$O(1)$$

# Code
```cpp []
class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int st = 0, e = n.size() - 1;
        int mid;
        mid = st + (e - st) / 2;
        while (st <= e) {
            mid = st + (e - st) / 2;
            if (n[mid] == t) {
                return mid;
            } else if (n[mid] > t) {
                e = mid - 1;
                
            } else {
                st = mid + 1;
            }
        }
        return st ;
    }
};
```
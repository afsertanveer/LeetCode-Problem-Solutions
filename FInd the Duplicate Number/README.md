# Intuition
Since I cannot change the , we have to use slow and fast algorithim approach which is popular for linked list.

# Approach
[Click here to learn more about slow and fast algorithim](https://www.geeksforgeeks.org/how-does-floyds-slow-and-fast-pointers-approach-work/)

# Complexity
- Time complexity:$$O(n)$$

- Space complexity:$$O(1)$$

# Code
```cpp []
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        slow = nums[0] ;
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
```
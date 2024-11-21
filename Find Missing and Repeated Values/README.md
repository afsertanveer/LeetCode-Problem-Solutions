# Intuition
Given matrix is n*n size and the input range is also given as [1-$n^2$] value. So using set can identify the repeating value and for missing value I use the traditional summation concept here.

# Approach
By using set I can easily identify the repeated value. Everytime whenever I am inserting an element into the set, I am checking if it already exists or not. If it already exists in the set, I just take the value and save it.

For the missing value:

Since the range is given [1-$n^2$] , so I can calculate the sum of the grids.

## Mathematical Sum Rule:

 $n = \dfrac{n*(n+1)}{2}$

From Here I can easily find the expected sum which should have I got and while I was searching the repeated value I also calculate the actual sum there. 

```
[1,,2,2,3]
```
For this series, it is easily visible that 4 is missing in a range of 1-4 and my expected sum is 10 , but my actual sum is 1+2+2+3 = 8 .

Here I know the repeated value already and I have the actual sum and expected sum too. Since the actual sum is having one value repeated and I also know the value, so if I add that value to the expected sum and substract the actual sum, shouldn't I get the missing value? Of course!

so missing value = expectedSum + repeatedElement - actualSum = 10 + 2 - 8 = 4

Thus I get the missing value

# Complexity
- Time complexity: $$O(n)$$

- Space complexity: $$O(n)$$

# Code
```cpp []
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& a) {
        unordered_map<int, int> m;
        int n = a.size() ;
        unordered_set<int> s;
        vector<int> result = {-1, -1};
        int actualSum = 0 ;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++) {
                actualSum +=a[i][j] ;
                if (s.find(a[i][j]) != s.end()) {
                    result[0] = a[i][j];
                }
                s.insert(a[i][j]);
            }
        }
        result[1] = ((n*n)*(n*n +1))/2 + result[0] - actualSum;
        return result ;
    }
};
```
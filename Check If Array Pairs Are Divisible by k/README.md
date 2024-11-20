# Intuition
A bit tricky problem. Here I have to keep track of remainder of each element so that I can somehow match it later.

# Approach
I have to use hash table **(unordered_map)** to keep the track of remainder for each element.

array= [1,2,3,4] k = 5
here the pairs are {1,4},{2,3}
(1+4)% 5 = 0 ;
(2+3)% 5 = 0 ;

Again if I go through the rules of mod,
(1%5 +  4%5) % 5 = (1+4)%5 = 0

So if I keep the modulus of each element and I check counter of the difference from the remainder is same then I am convinced this is a pair. 

The exception is for remainder zero where I will check that the occurance for remainder zero is even or not.  
 
# Modulator Rules:
(a+b) % c = (a%c  + b%c ) % C
a%c + c if a<0

# Complexity
- Time complexity: $$O(n)$$ =

- Space complexity: $$O(n)$$ 

# Code
```cpp []
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> t;
        vector<int> temp = arr;
        int i = 0, j = arr.size() - 1;
        int target = 0;
        for (int i = 0; i < arr.size(); i++) {
            int x = arr[i] % k < 0 ? arr[i] % k + k : arr[i] % k;
            t[x]++;
        }
        for (int i = 0; i < k; i++) {
            if (i == 0) {
                if (t[i] % 2 != 0) {
                    return false;
                }
            } else {
                if (t[i] != t[k - i])
                    return false;
            }
        }

        return true;
    }
};
```
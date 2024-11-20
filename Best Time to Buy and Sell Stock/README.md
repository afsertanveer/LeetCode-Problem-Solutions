# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
First, I  try to find the approach studying the descriptions and test cases. Here I find the idea that I have to buy at the least price possible and have to sell at the highest price to maximize the profit.
# Approach
<!-- Describe your approach to solving the problem. -->
It's kind of dynamic problem where you have to keep memorize the previous iteration's result and keep checking further for best solution. 

First I assumed that the first price is the best buy to get the maximum profit, then I keep checking the prices and update the best buy and profit with condition. 

I will update the highest profit if the current iterated profit is greater than the current best buy and inside that I will not just put the profit directly, I also compared the previous highest profit and kept the highest one.

Best buy updation is quite simple, if I am finding lesser price than the current one, I am updating.
# Complexity
- Time complexity: **O(n)**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: **O(1)**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int highestProfit = 0 ;        
        int bestBuy = prices[0] ;
        for( int i = 1 ; i < prices.size()  ; i++ ){
            if( prices[i] > bestBuy){
                highestProfit = max( highestProfit , prices[i] - bestBuy);
            }
            bestBuy = min( bestBuy, prices[i] ) ;
        }
       
        return highestProfit ;
    }
};
```
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
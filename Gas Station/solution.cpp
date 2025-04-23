class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0 , totalCost = 0;
        
        for( int val:gas ){
            totalGas += val;
        }

        for( int val:cost ){
            totalCost += val ;
        }
        if(totalCost>totalGas){
            return -1 ;
        }

        int start = 0 , currGas = 0  ;

        for( int i = 0 ; i<gas.size() ; i++ ){
            currGas += gas[i] - cost[i] ;
            if( currGas < 0 ){
                currGas =  0 ;
                start = i + 1 ; 
            }
        }
        return start ;
    }
};
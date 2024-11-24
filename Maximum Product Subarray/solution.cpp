class Solution {
public:
    int maxProduct(vector<int>& a) {
        bool neg = true ;
        int result = INT_MIN , prefix = 1, suffix= 1;
        for( int i = 0 ; i < a.size() ; i++ ){
           
            prefix = a[i]*prefix;
            suffix = suffix * a[a.size()-i-1];
            result = max( result, max(prefix,suffix));
            if(prefix==0) prefix = 1;
            if(suffix==0) suffix = 1 ;
            
            
        }
        return result ;
    }
};
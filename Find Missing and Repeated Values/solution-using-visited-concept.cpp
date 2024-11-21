class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& a) {
        int  max = a.size()*a[0].size() ;
        vector<int>result(2,-1);
        vector<int>visited(max+1,0);
        for( int i = 0 ;  i<a.size() ; i++ ){
            for( int j = 0 ; j<a[i].size() ; j++){
                visited[a[i][j]]++;
            }
        }
        for( int i = 1 ;i<=max ; i++ ){
            if( visited[i] == 0 ){
                result[1] = i ;
            }
            if(visited[i]>1){
                result[0] =  i ;
            }
        }
        return result ;
    }
};
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>s;
        vector<int>rsn(h.size(),0);
        vector<int>lsn(h.size(),0);
        for(int i = h.size() - 1; i>=0 ; i--){
            while(s.size()>0 && h[i]<=h[s.top()]){
                s.pop();
            }
            rsn[i] = s.empty()? h.size() : s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i = 0 ; i<h.size() ; i++){
            while(s.size()>0 && h[i]<=h[s.top()]){
                s.pop();
            }
            lsn[i] = s.empty()? -1 :s.top();
            s.push(i);
        }
        
        int result=0 ;
        for( int i = 0 ; i<h.size() ; i++ ){
           
           int width = rsn[i] - lsn[i]- 1 ;
           int curArea = h[i] * width;
           result = max(result,curArea);
        }
        return result;
    }
};
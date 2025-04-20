class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        stack<int>s;
        right[n-1] = h[n-1];
        for(int i = n - 2 ; i>=0 ; i-- ){
            right[i] = max(right[i+1],h[i]);
        }
        cout<<endl;
        left[0] = h[0];
        for(int i = 1 ; i<n ; i++ ){
            left[i] = max(left[i-1],h[i]);
        }
        int result = 0 ;
        for(int i = 0 ; i<n ; i++ ){
            int curMin ;
            if(left[i]<right[i]){
                curMin = left[i];
            }else{
                curMin = right[i];
            }
            int s = curMin-h[i];
            result = result +s ;
        }
        return result ;
    }
};
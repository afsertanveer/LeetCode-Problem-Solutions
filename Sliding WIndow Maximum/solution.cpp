class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int k) {
        deque<int> dq;
        vector<int>result;


        for(int i = 0 ; i < k ; i++ ){
            while( dq.size()>0 && n[dq.back()]<=n[i] ){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for( int i = k ; i<n.size() ; i++ ){
            result.push_back(n[dq.front()]);
            while( dq.size()>0 && dq.front()<=i-k ){
                dq.pop_front();
            }
            while( dq.size()>0 && n[dq.back()]<=n[i] ){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        if(!dq.empty()){
            result.push_back(n[dq.front()]);
        }
        return result;
    }
};
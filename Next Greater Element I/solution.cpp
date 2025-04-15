class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        unordered_map<int,int>m;
        for( int i = 0 ; i<b.size() ; i++){
            int val = -1 ;
            for(int j = i+1 ; j<b.size() ; j++){
                if(b[j]>b[i]){
                    val = b[j];
                    break;
                }
            }
            m.insert({b[i],val});
        }
        for(int i  = 0 ; i<a.size(); i++){
            ans.push_back(m[a[i]]);
        }
        return ans;
    }
};
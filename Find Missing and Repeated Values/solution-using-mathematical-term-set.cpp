class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& a) {
        unordered_map<int, int> m;
        int n = a.size() ;
        unordered_set<int> s;
        vector<int> result = {-1, -1};
        int actualSum = 0 ;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++) {
                actualSum +=a[i][j] ;
                if (s.find(a[i][j]) != s.end()) {
                    result[0] = a[i][j];
                }
                s.insert(a[i][j]);
            }
        }
        result[1] = ((n*n)*(n*n +1))/2 + result[0] - actualSum;
        return result ;
    }
};
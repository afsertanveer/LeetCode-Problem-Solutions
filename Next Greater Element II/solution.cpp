class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
         vector<int> ans(a.size(), -1);
        int n = a.size();
        for(int i = 0; i < n; i++) {
            int num = a[i];
            for(int j = i + 1; j < i + n; j++) {
                int index = j % n;
                if(a[index] > num) {
                    ans[i] = a[index];
                    break;
                }
            }
        }
        return ans;
    }
};
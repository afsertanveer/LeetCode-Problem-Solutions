class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> t;
        vector<int> temp = arr;
        int i = 0, j = arr.size() - 1;
        int target = 0;
        for (int i = 0; i < arr.size(); i++) {
            int x = arr[i] % k < 0 ? arr[i] % k + k : arr[i] % k;
            t[x]++;
        }
        for (int i = 0; i < k; i++) {
            if (i == 0) {
                if (t[i] % 2 != 0) {
                    return false;
                }
            } else {
                if (t[i] != t[k - i])
                    return false;
            }
        }

        return true;
    }
};
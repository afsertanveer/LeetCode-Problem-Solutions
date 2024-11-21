class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int st = 0, e = n.size() - 1;
        int mid;
        mid = st + (e - st) / 2;
        while (st <= e) {
            mid = st + (e - st) / 2;
            if (n[mid] == t) {
                return mid;
            } else if (n[mid] > t) {
                e = mid - 1;
                
            } else {
                st = mid + 1;
            }
        }
        return st ;
    }
};
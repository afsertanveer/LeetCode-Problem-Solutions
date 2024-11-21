class Solution {
public:
    vector<string> summaryRanges(vector<int>& n) {
        vector<string> s;
        int it = 0, flag = 0;
         if (n.size() == 1) return vector<string>({to_string(n[0])});
        string temp = "";
        for (int i = 0; i < n.size(); i++) {
            if (flag == 0) {
                temp = temp + to_string(n[i]);
                flag = 1;
            }
            cout << temp << endl;
            if (i + 1 != n.size()) {
                if (n[i] + 1 == n[i + 1]) {
                    it++;
                } else {
                    if (it > 0) {
                        temp = temp + "->" + to_string(n[i]);
                    }
                    s.push_back(temp);
                    it = 0;
                    flag = 0;
                    temp = "";
                }
            } else {
                if (n[i] - 1 == n[i - 1]) {
                    it++;
                }
                if (it > 0) {
                    temp = temp + "->" + to_string(n[i]);
                }
                s.push_back(temp);
                it = 0;
                flag = 0;
                temp = "";
            }
        }
        return s;
    }
};
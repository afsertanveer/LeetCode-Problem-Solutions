# Complexity
- Time complexity: $$O(2^n)$$ 
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:$$O(n)$$ 
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    vector<vector<string>>result ;
    bool isPalindrome(string s){
        string s2 = s;
        reverse(s2.begin(),s2.end());
        return s == s2;
    }
    void getAllParts(string s , vector<string>& partition){
        if(s.size()==0){
            result.push_back(partition);
            return;
        }
        for( int i = 0 ; i<s.size() ; i++ ){
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
               partition.push_back(part);
               getAllParts(s.substr(i+1),partition);
               partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>partition;
        getAllParts(s,partition);
        return result ;
        
    }
};
```
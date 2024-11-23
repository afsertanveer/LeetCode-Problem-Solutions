# Approach
Matching parentheses through using stack

# Complexity
- Time complexity: $$O(n)$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(n)$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```cpp []
class Solution {
public:
    bool isValid(string s) {
        stack<char> ch ;
        for( char c : s ){
            if(c=='(' || c=='{' || c=='['){
                ch.push(c);
            }else{
                if(ch.empty() || (c==')' && ch.top()!='(') || (c=='}' && ch.top()!='{') || (c==']' && ch.top()!='[')){
                    return false;
                }
                ch.pop();
            }
        }
        return ch.empty();
    }
};
```
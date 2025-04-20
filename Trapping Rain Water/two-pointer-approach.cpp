class Solution {
public:
    int trap(vector<int>& h) {
        int ans = 0 , lmax = 0 , rmax =  0 ;
        int l = 0 , r = h.size() - 1 ;
        while(l<r){
            lmax = max(lmax,h[l]);
            rmax = max(rmax,h[r]);
            if(lmax<rmax){
                ans  = ans + (lmax-h[l]) ;
                l++;
            }else{
                ans = ans + (rmax-h[r]);
                r--;
            }

        }
        return ans ;
    }
};
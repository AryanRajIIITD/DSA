class Solution {
public:

    long long totalh(vector<int>& piles, int s){
        long long totalhour = 0;
        for(int b : piles){
            
            totalhour += (b + (long long)s - 1) / s;
        }
        return totalhour;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int k = 1, hi = maxi, a = maxi;
        
        while(k <= hi){
            int mid = k + (hi - k) / 2;
            
            long long ans = totalh(piles, mid);
            
            if(ans <= h){
                a = mid;
                hi = mid - 1;
            } else {
                k = mid + 1;
            }
        }
        return a;
    }
};

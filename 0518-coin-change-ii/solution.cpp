class Solution {
public:
    int change(int a, vector<int>& coins) {
        int n=coins.size();
        vector<unsigned long long>prev (a+1,0);
        vector<unsigned long long> curr(a+1,0);
        prev[0]=1;    
        curr[0] = 1;
        
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<=a;j++){
                if(j<coins[i]){
                    curr[j]=prev[j];
                } else {
                    curr[j]=curr[j-coins[i]]+prev[j];
                }
            }
            prev=curr;
        }
        return (int)prev[a];
    }
};

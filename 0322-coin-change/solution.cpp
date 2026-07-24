class Solution {
public:
    int coinChange(vector<int>& coins, int a) {
        int n=coins.size();
        vector<int>curr(a+1,1e9);
        vector<int>prev(a+1,1e9);
        prev[0]=0;
        curr[0] = 0;
        
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=a;j++){
                if(j<coins[i]){
                    curr[j]=prev[j];
                } else {
                    curr[j]=min(1+curr[j-coins[i]],prev[j]);
                }
            }
            prev=curr;
        }
        return (prev[a] >= 1e9) ? -1 : prev[a];    
    }
};

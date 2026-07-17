class Solution {
public:
    unordered_map<int,int> d;
    int climbStairs(int n) {
        if(n==1 || n==2){
            return n;
        }
        if(d.find(n)!=d.end()){
            return d[n];
        }
        int ans=climbStairs(n-1)+climbStairs(n-2);
        d[n]=ans;
        return ans;
    }
};

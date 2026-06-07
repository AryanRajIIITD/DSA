class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),j=0,i=0,s=nums[0],start=0;
        if(n==k) return;
        k=k%n;
        while(j<=n){
            swap(s,nums[(i+k)%n]);
            j++;
            i=(i+k)%n;
            if (i==start &&j<n){
                start++;
                i++;
                s=nums[i];
            }
        }
        
      
    }
};

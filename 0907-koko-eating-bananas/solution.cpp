class Solution {
public:
    long long totalhours(vector<int>&piles,int mid){
        long long totalh=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalh+=ceil((double)piles[i]/(double)mid);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int low =1,high=maxi,ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=totalhours(piles,mid);
            if(hours<=h){
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
        return low;
        
    }
};

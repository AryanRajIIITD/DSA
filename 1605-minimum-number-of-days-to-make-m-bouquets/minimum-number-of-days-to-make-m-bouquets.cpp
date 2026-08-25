class Solution {
public:
    long long totaldays(vector<int>&bloomDay,int day,int k){
        long long bouquet=0;
        int cday=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cday++;
                if(cday==k){
                    bouquet++;
                    cday=0;
                }
            } else {
                cday=0;
            }
            
        }
        return bouquet;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int low=mini,high=maxi,ans=-1;
        if((long long)m*k>bloomDay.size()) return ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long bouquet=totaldays(bloomDay,mid,k);
            if(bouquet>=m){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }
};
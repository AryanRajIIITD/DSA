class Solution {
public:
    bool can(vector<int>& position,int balls,int d){
        int count=1,last=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-last>=d){
                count++;
                last=position[i];
            }
            if(count==balls){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1,h=position.back()-position.front();
        while(l<=h){
            int mid=(l+h)/2;
            if(can(position,m,mid)){
                l=mid+1;
            } else {
                h=mid-1;
            }
        }
        return h;
    }
};

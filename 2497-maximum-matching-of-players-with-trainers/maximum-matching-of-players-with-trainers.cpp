class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n=players.size();
        int m=trainers.size();
        int count=0,i=0,j=0;
        while(i<m && j<n){
            if(trainers[i]>=players[j]){
                count+=1;
                i++;
                j++;
            } else {
                i++;
            }
        }
        return count;
    }
};
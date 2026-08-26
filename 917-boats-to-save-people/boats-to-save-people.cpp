class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int low=0,high=people.size()-1;
        int boat=0;
        while(low<=high){ 
            int remain=limit-people[high];
            high-=1;
            boat+=1;
            if(people[low]<=remain){
                low+=1;
            }
        }
        return boat;
    }
};
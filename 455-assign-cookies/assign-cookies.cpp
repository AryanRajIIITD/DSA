class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0,i=0,j=0;
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n && j<m){
            if(s[j]>=g[i]){
               count+=1;
                j++;
                i++; 
            } else {
                j++;
            }
        }
        return count;
    }
};
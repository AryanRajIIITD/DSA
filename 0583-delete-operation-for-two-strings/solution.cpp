class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        vector<int>curr (n2+1,0);
        vector<int>prev (n2+1,0);

        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                if(word1[i]==word2[j]){
                    curr[j]=1+prev[j+1];
                } else {
                    curr[j]=max(prev[j],curr[j+1]);
                }
            }
            prev=curr;
        }
        return (n1-prev[0])+(n2-prev[0]);
    }
};

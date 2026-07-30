class Solution {
public:
    bool p(vector<vector<char>>& b,int r, int c,int m,int n,string&word,int k){
        if(k==word.size()){
            return true;
        }
        if(r<0 || r>=n || c<0 || c>=m || b[r][c]!=word[k]){
            return false;
        }
        char temp=b[r][c];
        b[r][c]='#';
        int row[]={+1,0,0,-1};
        int col[]={0,-1,+1,0};
        for(int i=0;i<4;i++){
            int ni=r+row[i];
            int nj=c+col[i];
            if(p(b,ni,nj,m,n,word,k+1)){
                return true;
            }
        }
        b[r][c]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(p(board,i,j,m,n,word,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

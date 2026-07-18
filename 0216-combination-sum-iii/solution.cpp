class Solution {
public:
    void p(vector<int>&arr,int i,int j, int n, vector<int>&d,vector<vector<int>>&r,int sum,int k){
        if(i==k || j>=9){
            if(sum==n && d.size()==k){
                r.push_back(d);
            }
            return;
        }
        if(sum+arr[j]<=n){
            d.push_back(arr[j]);
            p(arr,i+1,j+1,n,d,r,sum+arr[j],k);
            d.pop_back();
        }
        p(arr,i,j+1,n,d,r,sum,k);
        return;
        

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int i=0,j=0,sum=0;
        vector<int> d;
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> r;
        p(arr,i,j,n,d,r,sum,k);
        return r;
    }
};

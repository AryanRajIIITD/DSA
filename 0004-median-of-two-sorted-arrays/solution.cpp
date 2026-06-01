class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        vector<int> arr;
        while(i<n && j< m){
            
            if(nums1[i]>nums2[j]){
                arr.push_back(nums2[j]);
                j++;
            } else {
                arr.push_back(nums1[i]);
                i++;
            }
        }
        while(j<m){
            arr.push_back(nums2[j]);
            j++;
        }
        while(i<n){
            arr.push_back(nums1[i]);
            i++;
        }
        int l=arr.size();
        double median;
        int a=l/2;
        
        if(l%2==0){
            median=(arr[a-1]+arr[a])/2.0;
        } else {
            median=arr[a];
        }
        return median;
    }
};

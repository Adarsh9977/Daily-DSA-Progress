class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        double result;
        for(int i=0;i<n1;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        
        if((n1+n2)%2!=0){
            int mid=(n1+n2)/2;
            result= ans[mid];
        }else{
            int r=(n1+n2)/2;
            int l=r-1;
            result= ans[l]+ans[r];
            result/=2;
        }
        return result;
    }
};
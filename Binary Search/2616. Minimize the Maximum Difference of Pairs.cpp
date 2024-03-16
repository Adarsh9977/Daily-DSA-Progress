class Solution {
public:
    bool isValid(vector<int>& nums,int mid, int p, int n){
        int i=0;
        int countPairs=0;
        while(i<n-1){
            if(nums[i+1]-nums[i]<=mid){
                countPairs++;
                i+=2;
            }else{
                i++;
            }
        }
        return countPairs>=p;
    }

    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int l=0;
        int r=nums[n-1]-nums[0];
        int result=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isValid(nums, mid, p,n)){
                result=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return result;
    }
};
// Approach-1 by using average 
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long mini=nums[0];
        long long sum=nums[0];

        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]>mini){
                int x=sum/(i+1);
                if(x>=mini){
                    if(sum%(i+1))
                    mini=x+1;
                    else
                    mini=x;
                }
            }
        }
        return mini;
    }
};


// Approach-2 by using binary search

class Solution {
public:
    bool isvalid(vector<int>&nums, int mid_max, int n){
        vector<long long> arr(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]>mid_max){
                return false;
            }
            long long buffer=mid_max-arr[i];
            arr[i+1]=arr[i+1]-buffer;
        }
        return arr[n-1]<=mid_max;
    }

    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();

        int maxL=0;
        int maxR=*max_element(nums.begin(),nums.end());
        int result=0;
        while(maxL<=maxR){
            int mid_max=maxL+(maxR-maxL)/2;
            if(isvalid(nums, mid_max, n)){
                result=mid_max;
                maxR=mid_max-1;
            }else{
                maxL=mid_max+1;
            }
        }
        return result;

    }
};
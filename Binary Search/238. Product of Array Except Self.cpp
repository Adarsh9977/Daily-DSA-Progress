class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,0);
        int cntzero=0;
        int ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cntzero++;
            }
        }
        if(cntzero>1){
            return result;
        }

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            ans=ans*nums[i];
        }

        for(int i=0;i<n;i++){
            int val=nums[i];
        if(val!=0){
            if(cntzero>0){
                result[i]=0;
            }else{
                result[i]=ans/val;
            }
        }else{
            if(cntzero==1){
                result[i]=ans;
                }
        }
        }
    return result;
    }
};
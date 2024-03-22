//Approach-1 using map;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        map<int,int> mpp;
        for(int i=1;i<nums.size();i++){
           mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
        
    }
};
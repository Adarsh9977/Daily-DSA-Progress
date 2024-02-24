class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        int current=0;
        int cnt=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            current+=nums[i];
            if(mpp.find(current-k)!=mpp.end()){
                cnt+=mpp[current-k];
            }
            mpp[current]++;

        }
        return cnt;
    }
};
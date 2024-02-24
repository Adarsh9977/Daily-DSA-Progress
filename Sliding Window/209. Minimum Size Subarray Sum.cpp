class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int ret = INT_MAX;
        int j = 0;
        int n = nums.size();
        int psum = 0;
        for (int i=0; i<n; i++) {
            psum += nums[i];
            while (psum>=target) {
                ret = min(ret, i-j+1);
                psum -= nums[j];
                j++;
            }
                
        }
        return ret==INT_MAX ? 0 : ret;

    }
};
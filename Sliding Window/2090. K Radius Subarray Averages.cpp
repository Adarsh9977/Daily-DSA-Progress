class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0){
            return nums;
        }
        vector<int> result(n,-1);
        if(n<2*k+1){
            return result;
        }
        long long window=0;
        int left=0, right=2*k;
        int i=k;
        for(int i=left;i<=right;i++){
            window+=nums[i];
        }
        int cnt=2*k+1;
        result[i]=window/(cnt);
        i++;
        right++;
        while(right<n){
            int out=nums[left];
            int newel= nums[right];
            window=window+newel-out;
            result[i]=window/cnt;
            i++;
            right++;
            left++;
        }
    return result;
    }
};
//pattern for array questions by using sum 

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        unordered_map<int, int> mpp;
        mpp[0]=-1;
        int totalsum=0;
        int i=0;
        while(i<n){
            if(nums[i]==0){
                totalsum-=1;
            }else{
                totalsum+=1;
            }
            if(mpp.find(totalsum)!=mpp.end()){
                int len=i-mpp[totalsum];
                maxlen=max(maxlen,len );
            }else{
                mpp[totalsum]=i;
            }
            i++;
        }
        return maxlen;
    }
};
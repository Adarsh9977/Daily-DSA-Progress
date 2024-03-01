class Solution {
public:
    int maxConsecutiveAnswers(string nums, int k) {
        int n=nums.size();
        int result=0;
        int i=0,j=0;
        unordered_map<char, int>mp;

        while(j<n){
           mp[nums[j]]++;
           while(min(mp['F'], mp['T'])>k){
               mp[nums[i]]--;
               i++;
           }
           result=max(result, j-i+1);
           j++;
        }
        
        return result;
    }
};
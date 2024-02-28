class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(s.size()==0){
            return 0;
        }
        int ans=INT_MIN;
        map<char, int> mpp;
        int left=0;
        int right=0;
        while(right<n&&left<n){
            if(mpp.find(s[right])==mpp.end()){
                mpp[s[right]]++;
                ans=max(ans, right-left+1);
                right++;
            }
            else{
                mpp.erase(s[left++]);
            }
        }
        return ans;
    }
};
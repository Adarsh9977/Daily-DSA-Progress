class Solution {
public:
    int solve(unordered_map<char, int> &mp){
        int maxi=-1;
        int mini=INT_MAX;
        for(auto &it:mp){
            maxi=max(maxi, it.second);
            mini=min(mini, it.second);
            
        }
        return maxi-mini;
    }
    int beautySum(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            unordered_map<char, int>mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                cnt=cnt+solve(mp);
            }
        }
        return cnt;
    }
};
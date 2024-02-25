class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        int ans=INT_MAX;
        int start=0;
        int start_i=0;
        int end=0;
        if(m>n){
            return "";
        }
        unordered_map<char, int> mpp;
        for(auto & ch : t){
            mpp[ch]++;
        }

        while(end<n){
            if(mpp[s[end]]>0){
                m--;
            }
            mpp[s[end]]--;
            
            while(m==0){
                if(end-start+1<ans){
                    ans=end-start+1;
                    start_i=start;
                }
                mpp[s[start]]++;
                if(mpp[s[start]]>0){
                    m++;
                }
                start++;
            }

            
        end++;
        }
        return ans== INT_MAX ?  "" : s.substr(start_i, ans);
    }
};
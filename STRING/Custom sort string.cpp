class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char, int> mpp;
        for(int i=0;i<order.size();i++){
            mpp[order[i]]==0;
        }
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])!=mpp.end()){
            mpp[s[i]]++;
            }
        }
     for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])==mpp.end()){
                ans+=s[i];
            }
        }
        for(int i=0;i<order.size();i++){
           ans.append(mpp[order[i]],order[i]);
        }
       
        return ans;


    }
};
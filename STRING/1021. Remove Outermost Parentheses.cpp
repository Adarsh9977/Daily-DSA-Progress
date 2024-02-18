class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else
            cnt--;
            if(cnt==1&&s[i]=='('||cnt==0&&s[i]==')'){
                continue;
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==0){
            return num;
        }
        if(num.size()<=k){
            return "0";
        }
        stack<char> st;
        for(int i=0;i<num.size();i++){
            while(!st.empty()&&num[i]<st.top()&&k>0){
                st.pop();
                k--;
            }
            if(!st.empty()||num[i]!='0')st.push(num[i]);
        }
    while(!st.empty()&&k>0){
                st.pop();
                k--;
            }
        

        string ans="";

        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans.empty()?"0":ans;
    }
};
class Solution {
public:
    string reverseWords(string str) {
        stack<string>st;

        string temp = "";

        int n = str.length();

        for(int i=0;i<n;i++){

            if(str[i]!=' '){

               temp+=str[i];

            }

            else{

                if(temp.size()!=0){

                    st.push(temp);

                }

                temp = "";

            }

        }

        st.push(temp);

        string ans="";

        while(!st.empty()){

            ans+=st.top();
			st.pop();

            if(!st.empty()){
				ans+=" ";
			}
			

            

        }

        int s = 0;

        while(ans[s]==' '){

            s++;

        }

        return ans.substr(s);	
    }
};
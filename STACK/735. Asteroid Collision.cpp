class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> st;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int mark=1;
            while(!st.empty()&&st.top()>0&&arr[i]<=0){
                if(st.top()==abs(arr[i])){
                    st.pop();
                    mark=0;
                    break;
                }
                if(st.top()>abs(arr[i])){
                    mark=0;
                    break;
                }
                if(st.top()<abs(arr[i])){
                    st.pop();
                }
            }
            if(mark==1){
                st.push(arr[i]);
            }
        }
        vector<int> ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
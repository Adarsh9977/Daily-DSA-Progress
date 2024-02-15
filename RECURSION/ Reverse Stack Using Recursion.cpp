void reverseStack(stack<int> &st) {
    // Write your code here
    if(st.size()==0)return;
    int top = st.top();
    st.pop();
    reverseStack(st);
    stack<int> ans;
    while(!st.empty()){
        ans.push(st.top());
        st.pop();
    }
    st.push(top);
    while(!ans.empty()){
        st.push(ans.top());
        ans.pop();
    }

}
class Solution {
public:
    vector<int> getNSL(vector<int> & arr, int n){
    vector<int> ans(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            while(!st.empty()&&arr[st.top()]>=arr[i]){
                st.pop();
            }
                ans[i]=st.empty() ? -1 : st.top();
            
        }
        st.push(i);
    }
    return ans;

}

vector<int> getNSR(vector<int> & arr, int n){
    vector<int> ans(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans[i]=n;
        }
        else{
            while(!st.empty()&&arr[st.top()]>arr[i]){
                st.pop();
            }
                ans[i]=st.empty() ? n : st.top();
            
        }
        st.push(i);
    }
    return ans;

}
    long long sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        
        vector<int> NSL= getNSL(arr, n);
        vector<int> NSR= getNSR(arr, n);

        long long sum =0;

        for(int i=0;i<n;i++){
            long long ls= i-NSL[i];
            long long rs = NSR[i]-i;

            long long totalways = ls*rs;

            long long totalsum = arr[i]*totalways;

            sum = sum + totalsum;

        }
        return sum;
    }



    vector<int> getNLL(vector<int> & arr, int n){
    vector<int> ans(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            while(!st.empty()&&arr[st.top()]<=arr[i]){
                st.pop();
            }
                ans[i]=st.empty() ? -1 : st.top();
            
        }
        st.push(i);
    }
    return ans;

}

vector<int> getNLR(vector<int> & arr, int n){
    vector<int> ans(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans[i]=n;
        }
        else{
            while(!st.empty()&&arr[st.top()]<arr[i]){
                st.pop();
            }
                ans[i]=st.empty() ? n : st.top();
            
        }
        st.push(i);
    }
    return ans;

}
    long long sumSubarrayMax(vector<int>& arr) {
        int n=arr.size();
        
        vector<int> NLL= getNLL(arr, n);
        vector<int> NLR= getNLR(arr, n);

        long long sum =0;

        for(int i=0;i<n;i++){
            long long ls= i-NLL[i];
            long long rs = NLR[i]-i;

            long long totalways = ls*rs;

            long long totalsum = arr[i]*totalways;

            sum = sum + totalsum ;

        }
        return sum;
    }


    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums)-sumSubarrayMins(nums);
    }
};
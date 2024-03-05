//Approach-1 using Vector 

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        int left=0;
        int right=n-1;
        int ans=0;
        while(left<right){
            int sum=arr[left]+arr[right];
            ans=max(ans,sum);
            left++;
            right--;
        }
        return ans;
    }
};

//Approach-1 using stack
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        int n=st.size();
        temp=head;
        int count=1;
        int ans=0;
        while(count<=n/2){
            ans=max(ans, temp->val+st.top());
            temp=temp->next;
            st.pop();
            count++;
        }
        return ans;
    }
};
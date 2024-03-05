class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        int n=arr.size();
        swap(arr[k-1],arr[n-k]);
        ListNode* ans=new ListNode(arr[0]);
        ListNode* mover=ans;
        for(int i=1;i<n;i++){
            ListNode* temp=new ListNode(arr[i]); 
            mover->next=temp;
            mover=mover->next;
        }
        return ans;
    }
};
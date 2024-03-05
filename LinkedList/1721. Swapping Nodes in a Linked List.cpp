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




//Approach-2 without using array

class Solution {
public:
    int Length(ListNode* head){
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* find(ListNode* head, int k){
        while(k>1){
            head=head->next;
            k--;
        }
        return head;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        int n=Length(head);

        ListNode* node1=find(head, k);
        

        ListNode* node2=find(head, n-k+1);
        

        swap(node1->val, node2->val);
        return head;

        
    }
};
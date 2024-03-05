//Approach 1 using reverse the llinkedlist

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head-> next==NULL){
            return head;
        }
        ListNode* newHead =reverseList(head->next);
        ListNode* front = head-> next;
        front-> next=head;
        head-> next= nullptr;
        return newHead;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);

        ListNode* ans=new ListNode();
        int carry=0;
        int sum=0;

        while(l1!=NULL||l2!=NULL){
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            ans->val=sum%10;
            carry=sum/10;

            ListNode* newnode=new ListNode(carry);
            newnode->next=ans;
            ans=newnode;
            sum=carry;
        }
        return carry==0?ans->next:ans;
    }
};


//Approach-2 without reverse the linkedlist

class Solution {
public:
    

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        while(l1!=NULL){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            s2.push(l2->val);
            l2=l2->next;
        }

        ListNode* ans=new ListNode();
        int carry=0;
        int sum=0;

        while(!s1.empty()||!s2.empty()){
            if(!s1.empty()){
                sum+=s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum+=s2.top();
                s2.pop();
            }
            ans->val=sum%10;
            carry=sum/10;

            ListNode* newnode=new ListNode(carry);
            newnode->next=ans;
            ans=newnode;
            sum=carry;
        }
        return carry==0?ans->next:ans;
    }
};


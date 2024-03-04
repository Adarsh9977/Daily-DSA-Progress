class Solution {
public:
    ListNode* Head;
    Solution(ListNode* head) {
        Head=head;
        
    }
    
    int getRandom() {
       int count=1;
       int result=0;
       ListNode* temp= Head;
       while(temp!=NULL){
           if(rand()%count<1.0/count){
               result=temp->val;
           }
           count++;
           temp=temp->next;

       }
       return result;
    }
};
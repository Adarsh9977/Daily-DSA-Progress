class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode* curr=head;
        int l=0;
        while(curr){
            l++;
            curr=curr->next;
        }
        int eachbucket=l/k;
        int remainder=l%k;
        vector<ListNode*>result(k,NULL);
        curr=head;
        ListNode* prev=NULL;
        for(int i=0;curr!=NULL&&i<k;i++){
            result[i]=curr;
            for(int count=1;count<=eachbucket+(remainder>0?1:0);count++){
                prev=curr;
                curr=curr->next;
            }
            prev->next=NULL;

            remainder--;
        }
        return result;
    }
};
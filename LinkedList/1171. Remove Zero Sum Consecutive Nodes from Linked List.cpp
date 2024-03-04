class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int presum=0;
        unordered_map<int, ListNode*>mp;
        ListNode* dumynode=new ListNode(0);
        dumynode->next=head;
        mp[0]=dumynode;
        while(head!=NULL){
            presum+=head->val;
            if(mp.find(presum)!=mp.end()){
                ListNode* start=mp[presum];
                ListNode* temp=start;
                int psum=presum;
                while(temp!=head){
                    temp=temp->next;
                    psum+=temp->val;
                    if(temp!=head){
                        mp.erase(psum);
                    }
                }
                start->next=head->next;
            }
            else{
                mp[presum]=head;
            }
            head=head->next;
        }
        return dumynode->next;
    }
};
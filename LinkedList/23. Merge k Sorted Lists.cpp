
class Solution {
public:
    ListNode* mergetwosortedlists(ListNode* l1,ListNode* l2){
        if(!l1)return l2;
        if(!l2)return l1;

        if(l1->val<=l2->val){
            l1->next=mergetwosortedlists(l1->next,l2);
            return l1;
        }else{
            l2->next=mergetwosortedlists(l1,l2->next);
            return l2;
        }
        return NULL;
    }
    ListNode* partitionansmerge(int start,int end, vector<ListNode*>& lists){
        if(start>end)return NULL;
        if(start==end)return lists[start];

        int  mid=start+(end-start)/2;
        ListNode* L1=partitionansmerge(start, mid, lists);
        ListNode* L2=partitionansmerge(mid+1, end, lists);

        return mergetwosortedlists(L1, L2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0){
            return NULL;
        }
        return partitionansmerge(0,k-1,lists);
    }
};
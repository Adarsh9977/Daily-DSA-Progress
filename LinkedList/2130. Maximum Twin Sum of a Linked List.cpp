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

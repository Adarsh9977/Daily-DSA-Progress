//Approach-1 using map



class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        unordered_map<Node*, Node*>mp;
        Node* curr=head;
        Node* prev=NULL;
        Node* newhead=NULL;

        while(curr){
            Node* temp=new Node(curr->val);
            mp[curr]=temp;
            
            if(newhead==NULL){
                newhead=temp;
                prev=newhead;
            }
            else{
                prev->next=temp;
                prev=temp;
            }
            curr=curr->next;

        }
        curr=head;
        Node* newcurr=newhead;
        while(curr){
            if(curr->random==NULL){
                newcurr->random=NULL;
            }else{
                newcurr->random=mp[curr->random];
            }
            curr=curr->next;
            newcurr=newcurr->next;
        }

    return newhead;

    }
};

//Approach-2 without using map or extra space



class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        unordered_map<Node*, Node*>mp;
        Node* curr=head;

        while(curr){
            Node* currnext=curr-> next;
            curr->next=new Node(curr->val);
            curr->next->next=currnext;
            curr=currnext;
        }
        curr=head;
        while(curr&&curr->next){
            if(curr->random==NULL){
                curr->next->random=NULL;
            }else{
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        Node* newhead=head->next;
        Node* newcurr=newhead;
        curr=head;
        while(curr&&newcurr){
            curr->next=curr->next==NULL?NULL:curr->next->next;
            newcurr->next=newcurr->next==NULL?NULL:newcurr->next->next;

            curr=curr->next;
            newcurr=newcurr->next;
        }

    return newhead;

    }
};
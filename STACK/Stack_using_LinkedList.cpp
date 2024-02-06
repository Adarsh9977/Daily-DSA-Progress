
class Stack
{
    //Write your code here
    Node* top;
    int size;

public:
    Stack()
    {
        //Write your code here
        top=NULL;
        size=0;
    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
       return (size==0);
    }

    void push(int data)
    {
        //Write your code here
        Node* newNode = new Node(data);
        size++;
        if(top==NULL){
            top=newNode;
        }
        else{
        newNode-> next =top;
        top=newNode;
        }
        
    }

    void pop()
    {
        //Write your code here
        if(top==NULL){
            return ;
        }
        Node* temp = top;
        top= top-> next;
        temp-> next=NULL;
        delete temp;
        size--;
    }

    int getTop()
    {
        //Write your code here
        if(top==NULL)return -1;
        return top->data;
    }
};
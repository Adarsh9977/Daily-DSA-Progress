void Queue::push(int x) {
    // Write Your Code Here
    Node* newNode= new Node(x);
    if(front==NULL){
        front=newNode;
        rear=newNode;
    }
    else{
        rear-> next=newNode;
        rear=newNode;
    }
    
}

int Queue::pop() {
    // Write Your Code Here
    if(front==NULL){
        return -1;
    }
    else{
        int x= front-> data;
        front=front-> next;
        return x;
    }
    
    
}
class MyCircularQueue {
    
public:
vector<int> q;
    int s;
    MyCircularQueue(int k) {
        s = k;
        }
    
    bool enQueue(int value) {
        if(q.size()==s)return false;
        else{
            q.push_back(value);
            return true;
        }
    }
    
    bool deQueue() {
        if(q.size()==0)return false;
        for(int i=0;i<q.size()-1;i++){
            q[i]=q[i+1];
        }
        q.pop_back();
        return true;
        
    }
    
    int Front() {
        if(q.size()==0)return -1;

        return q[0];
    }
    
    int Rear() {
        if(q.size()==0)return -1;

        return q[q.size()-1];
    }
    
    bool isEmpty() {
        if(q.size()>0){
            return false;
        }
        else{
            return true;
        }
    }
    
    bool isFull() {
        if(q.size()==s){
            return 1;
        }
        else{
            return 0;
        }
    }
};
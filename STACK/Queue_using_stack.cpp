#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int> input;
    stack<int> output;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        input.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(input.empty()&& output.empty())return -1;

        if(!output.empty()){
           int y= output.top();
           output.pop();
           return y;
        }
        
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int x= output.top();
            output.pop();
            return x;
        
    }

    int peek() {
        // Implement the peek() function here.
        if(input.empty()&& output.empty())return -1;

       if(!output.empty()){
           return output.top();
        }
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return (output.empty()&&input.empty());
    }
};
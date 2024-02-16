class MyQueue {
private: 
    stack<int> mystack1;
    stack<int> mystack2;
public:
    MyQueue() { 
    }
    
    void push(int x) {
        if(!mystack1.empty()){
            
            while (mystack1.size() != 0) {
                int temp=mystack1.top();
                mystack2.push(temp);
                mystack1.pop();
            }
            mystack1.push(x);
            while (mystack2.size() != 0) {
                int temp=mystack2.top();
                mystack1.push(temp);
                mystack2.pop();
            }
            
        }
        if(mystack1.empty()){
            mystack1.push(x);
        }
        
    }
    
    int pop() {
        int temp = mystack1.top();
        mystack1.pop();
        return temp;
    }
    
    int peek() {
        return mystack1.top();
    }
    
    bool empty() {
        return mystack1.empty();
    }
};
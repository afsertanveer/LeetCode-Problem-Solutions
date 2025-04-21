class MyStack {
    queue<int>q1,q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        while(!q1.empty()){
            cout<<"front-> "<<q1.front()<<endl;
            q2.push(q1.front());
            q1.pop();
        }
        cout<<endl;
        int val = q2.front();
        cout<<"popped -> "<<val<<endl;
        q2.pop();
        while(!q2.empty()){

            q1.push(q2.front());
            q2.pop();
        }
        return val;
    }
    int top() {
        while(!q1.empty()){
            cout<<"front-> "<<q1.front()<<endl;
            q2.push(q1.front());
            q1.pop();
        }
        cout<<endl;
        int x = q2.front();
        cout<<"val->"<<x<<endl;
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
/*
Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False
*/

class MyStack {
public:
    queue<int>q;
    
    MyStack() {
        
    }
    
    void push(int x) {
          q.push(x);
        for(int i=0;i<q.size()-1;i++){
            q.push(pop());
        }
    }
    
    int pop() {
      int final1= top();
      q.pop();
        return final1;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.size()==0;
    }
};

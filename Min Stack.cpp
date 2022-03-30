class MinStack {
public:
    stack<int> s;
    int MinEle;
    MinStack() {
        MinStack* minStack = new MinStack();
    }
    
    
    void push(int val) {
        if(s.size()==0)
        {
            s.push(val);
            MinEle= val;
            
        }
        else
        {
            if(val>= MinEle)
            {
                s.push(val);
            }
            else if(val< MinEle)
            {
                s.push(2*val - MinEle);
                MinEle =val;
            }
        }
    }
    
    void pop() {
        if(s.size()==0) return -1;
        else
        {
            if(s.top()>= MinEle)  s.pop();
            else if(s.top()<MinEle)
            {
                MinEle = 2*MinEle - s.top();
            }
            s.pop();
        }
    }
    
    int top() {
        if(s.size()==0) return -1;
        else if(s.top()< MinEle)
            return MinEle;
    }
    
    int getMin() {
        if(s.size()==0) return -1;
        
        return MinEle;
    }
};
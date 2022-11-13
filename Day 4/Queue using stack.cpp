//User function Template for C++

class Queue {
    stack<int> i, o;
public:

    void enqueue(int x) {
        i.push(x);
    }

    int dequeue() {
        if(i.empty())
            return -1;
            
        while(i.size() > 0)
        {
            o.push(i.top());
            i.pop();
        }
        
        int res = o.top();
        o.pop();
        
        while(o.size() > 0)
        {
            i.push(o.top());
            o.pop();
        }
        
        return res;
    }
};

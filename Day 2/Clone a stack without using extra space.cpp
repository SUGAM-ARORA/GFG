//User function Template for C++

class Solution{
    public:
    void clonestack(stack<int> stk, stack<int>& cloned)
    {
        stack<int> s;
        while(!stk.empty())
        {
            s.push(stk.top());
            stk.pop();
        }
        while(!s.empty())
        {
            cloned.push(s.top());
            s.pop();
        }
    }
};

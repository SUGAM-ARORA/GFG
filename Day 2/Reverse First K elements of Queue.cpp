// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) 
{
    stack<int> s;
    queue<int> qt;
    while(k!=0)
    {
        s.push(q.front());
        q.pop();
        k--;
    }
    while(!s.empty())
    {
       qt.push(s.top());
       s.pop();  
    }
    while(!q.empty())
    {
        qt.push(q.front());
        q.pop();
    }
return qt;
}

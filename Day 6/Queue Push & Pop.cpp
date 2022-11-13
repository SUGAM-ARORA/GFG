//User function Template for C++


//User function Template for C++

queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> q;
    int i=0;
    while(i<n)
    {
        q.push(arr[i]);
        i++;
    }
    return q;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty())
    {
    cout<<s.front()<<" ";
    s.pop();
    }
} 

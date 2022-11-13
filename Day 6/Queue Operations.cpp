//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int f=0;
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            int r=q.front();
            if(k==r)
            {
                f++;
            }
            q.pop();
            q.push(r);
        }
        if(f==0)
        {
            return -1;
        }
        return f;
    }
};

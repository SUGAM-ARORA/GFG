class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq(arr, arr+n);
        
        long long int res=0;
        
        while(pq.size()> 1){
            
            long long int f= pq.top();
            pq.pop();
            long long int s= pq.top();
            pq.pop();
            
            res+= f+s;
            pq.push(f+s);
        }
        
        return res;
    }
};

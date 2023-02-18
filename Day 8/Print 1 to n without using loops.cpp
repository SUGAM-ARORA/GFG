//User function Template for C++
class Solution
{
public:
    void printTillN(int N)
    {
       int i=N;
        if(i==0)
        {
            return;
        }
        else{
        printTillN(i-1);
           cout<<i<<" ";
        }
    }
};

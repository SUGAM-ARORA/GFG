//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int n)
    {
        // Write Your Code here
        int res=0;
        for(int i=5; i<=n; i*=5){
            res= res + n/i;
        }
        return res;
    }
};


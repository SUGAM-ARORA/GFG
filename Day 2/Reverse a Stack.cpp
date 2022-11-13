//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &St){
        vector<int>r;
        while(!St.empty())
        {
            r.push_back(St.top());
            St.pop();
        }
        for(int i=0;i<r.size();i++)
        {
            cout<<r[i]<<" ";
        }
    }
};

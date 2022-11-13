//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2)
    {
        int prev=0;
        int ans=0;
        for(int i=0;i<S2.length();i++){
            int next=S1.find(S2[i]);
            ans+=abs(next-prev);
            prev=next;
        }
        return ans;
    }
};

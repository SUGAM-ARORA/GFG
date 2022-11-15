// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
        int i;
        for(i=0;i<S.size();i++)
        {
            if((char)S[i]<=97)
            {
                S[i]=(char)((int)S[i]+32);
            }
        }
        return S;
    }
};

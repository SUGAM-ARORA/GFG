class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        int XOR = 0;
        int re1 = 0;
        int re2 = 0;
        vector<long long> ans;
        for(int i=0;i<N;i++) {
            XOR = XOR ^ Arr[i];
        }
        
        int Sm = XOR & ~(XOR -1);
        
        for(int i=0;i<N;i++) {
            if((Arr[i] & Sm) != 0)
                re1 = re1 ^ Arr[i];
            else 
            re2 = re2 ^ Arr[i];
        }
    
        if(re1 > re2) {
            ans.push_back(re1);
            ans.push_back(re2);
        } else {
            ans.push_back(re2);
            ans.push_back(re1);
        }
        return ans;
    }
};

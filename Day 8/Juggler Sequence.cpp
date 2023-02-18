// User function Template for C++
 class Solution{
public:
vector<int> v;
    vector<int> jugglerSequence(int N){
        // code here
                    v.push_back(N);
        if(N==1){
            return v;
        }
        if(N%2==1){
            int a=floor(pow(N,1.5));
            return  jugglerSequence(a);
        }
        else {
            int a=floor(sqrt(N));
           return jugglerSequence(a);
        }
    }
};

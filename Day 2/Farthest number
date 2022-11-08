//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        vector<int>ans(N,-1);
       vector<int>suffix(N);
       suffix[N-1]=Arr[N-1];
       for(int i=N-2;i>=0;i--)
       {
           suffix[i]=min(suffix[i+1],Arr[i]);
       }
       for(int i=N-2;i>=0;i--)
       {
           int a=i+1;
           int b=N-1;
           while(a<=b)
           {
               int m=a+(b-a)/2;
               if(suffix[m]<Arr[i])
               {
               ans[i]=m;
               a=m+1;
           }
           else
           {
           b=m-1;
           }
       }
       }
       return ans;
    }
};

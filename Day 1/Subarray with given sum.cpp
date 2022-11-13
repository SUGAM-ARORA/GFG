{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        int i=0,j=0;
        vector<int>v;
        long long sum=0;
        while(i<=j&&j<n){
            sum+=a[j];
           if(sum>=s){
                while(i<j&&sum>s){
                    sum-=a[i];
                    i++;
                }
                if(sum==s){
                    v.push_back(i+1);
                    v.push_back(j+1);
                    break;
                }
            }
            j++;
        }
        if(v.size()==0) v.push_back(-1);
        return v;
    }
};

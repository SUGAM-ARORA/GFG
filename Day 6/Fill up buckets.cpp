//User function Template for C++

class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        // code here
         long long int ans = 1 ; 

        long long N = 1e9 + 7 ;

        sort(capacity.begin() , capacity.end()) ;

        for(int i = 0 ; i<n ; i++){

            ans = ans*(capacity[i] - i) ;

            ans  = ans%N ;

        }

        return ans ;
    }
};

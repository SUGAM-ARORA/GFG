class Solution{   
public:
    #define ll long long
    int countPaths(int N){
        // code here 
        int mod = 1e9+7;
        if(N == 1){
            return 0;
        }
        else if(N == 2){
            return 3;
        }
        else if(N == 3){
            return 6;
        }
        else{
            ll f = 3,s = 6;
            for(ll i = 4; i <= N; i++){
                ll x = (3 * f + 2 * s) % mod;
                ll t = s;
                s = x;
                f = t;
            }
            return s;
        }
    }
};

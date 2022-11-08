// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        
    //total number of food req to survive till survival = Number of days of survival * unit of food req one day
        int totalFoodReq = S * M;
    //total number of days shop will be open till survival = Number of days of survival - (Number of days of survival / 7)
        int totalShopOpenDays = S - (S / 7);
    //total available food till survival 
        int totalAvailableFood = totalShopOpenDays * N;
        
        if(totalFoodReq > totalAvailableFood){
            return -1;
        }
    //do dry run will get use of ceil anf float    
        return ceil(totalFoodReq /(float) N);
    }
};

int findMinimumInvertingFactor(int arr[], int n) 
{ 
    // Complete the function 
    for(int i=0;i<n;i++){
        int temp =arr[i];
        int reverse=0;
        while(temp>0){
            int x = temp%10;
            reverse= reverse*10+ x;
            temp/=10;
        }
        arr[i]=reverse;
    }
    sort(arr,arr+n);
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        int diff= arr[i+1]-arr[i];
        if(diff<ans){
            ans=diff;
        }
    }
    return ans;
} 

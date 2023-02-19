// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
         int high =n-1,low =0;
        while(low <=high){
            int mid = (high+low)/2;
            if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high =mid -1;
        }
        else if (arr[mid]<k){
            low =mid +1;
        }
        }
        return -1;
    }
};

//User function template for C++
class Solution{
public:	
 int findKRotation(int arr[], int n) {
        // code here
        int l = 0;
        int h = n-1;
        while(l<h){
            int mid  = (l + h) / 2; 
            if(arr[mid]>arr[h])l = mid + 1;
            else h = mid;
        }
        return l;
    }

};

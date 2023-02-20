//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> v;
	    sort(arr,arr+n);
	    for(int i=1;i<=k;i++){
	        v.push_back(arr[n-i]);
	    }
	    return v;
	}

};

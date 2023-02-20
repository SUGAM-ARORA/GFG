//User function template for C++
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    vector<int> temp;
	    for(int i=0;i<n;i++){
	        int op = arr[i]^x;
	        if(op!=0) temp.push_back(arr[i]);
	    }
	    int ans = n- temp.size();
	    return ans;
	    
	}
};

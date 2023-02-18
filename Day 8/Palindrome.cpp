//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int temp = n;
        int rev=0;
        while(n>0){
            rev = rev*10+(n%10);
            n = n/10;
        }
        if(rev==temp){
            return "Yes";
        }
        else{
            return "No";
		}
		}
};

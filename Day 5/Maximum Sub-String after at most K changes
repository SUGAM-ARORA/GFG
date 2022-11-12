class Solution {
	public:
		int characterReplacement(string s, int k){
     int ans = 0;
     int n = s.size();
     int i=0,j=0;
     int maxf = 0;
     unordered_map<char,int> mp;
     while(j < n){
         mp[s[j]]++;
         maxf = max(maxf,mp[s[j]]);
         int len = j - i+1;
         if(len - maxf <= k)
         {
             j++;
             ans = max(ans,len);
         }
         else
         {
             mp[s[i]]--;
             i++;
             j++;
         }
     }
     return ans;
 }
};

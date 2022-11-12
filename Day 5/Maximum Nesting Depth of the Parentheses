class Solution {
  public:
    int maxDepth(string s) {
        // code here
        int depth = 0, max_depth = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(')
                depth++;
            else if(s[i] == ')')
                depth--;
            max_depth = max(max_depth, depth);
        }
        return max_depth;
    }
};

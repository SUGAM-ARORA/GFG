class Solution{   
public:
    string magicalString(string s){
        
        for(int i=0;i<s.length();i++){
            s[i]='a'+'z'-s[i];
        }
        return s;
    }
};

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string ans;
        int count=0;
        int total=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' && total!=0){
                ans.push_back(s[i]);
                total++;
            }
            else if(s[i]==')' && total!=1){
                ans.push_back(s[i]);
                total--;
            }
            else if(total==1){
                total--;
            }
            else{
                total++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        int i=n-1;
        while(i >= 0 && s[i]==' '){
            i--;
        }
        for(i;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        string comp=s+s;
        for(int i=0;i<n;i++){
            if(comp.substr(i,n)==goal){
                return true;
            }
        }
        return false;
    }
};
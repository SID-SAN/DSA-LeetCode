class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string resS = "", resT = "";
        
        for (char c : s) {
            if (c != '#') {
                resS.push_back(c);
            } 
            else if (!resS.empty()) {
                resS.pop_back();
            }
        }
        
        for (char c : t) {
            if (c != '#') {
                resT.push_back(c);
            } 
            else if (!resT.empty()) {
                resT.pop_back();
            }
        }
        
        return resS == resT;
    }
};
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> ans;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(!ans.empty() && ans.top()==s[i]){
                ans.pop();
            }
            else{
                ans.push(s[i]);
            }
        }

        string res="";
        while(!ans.empty()){
            res.push_back(ans.top());
            ans.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
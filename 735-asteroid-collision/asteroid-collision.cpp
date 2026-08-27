class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> res;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if(st.empty() || st.top() < 0 || asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            else{
                if(-1*asteroids[i]>st.top()){
                    st.pop();
                    i--;
                }
                else if(-1*asteroids[i]==st.top()){
                    st.pop();
                }
                
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
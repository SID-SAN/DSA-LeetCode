class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        int ans = INT_MIN;
        int right = 0;

        for (right; right < k; right++) {
            sum += cardPoints[right];
        }
        ans=sum;
        
        for (int left = n - 1; left > n - k - 1; left--) {
            right--;
            sum -= cardPoints[right];
            sum += cardPoints[left];
            ans = max(ans, sum);
        }
        return ans;
    }
};
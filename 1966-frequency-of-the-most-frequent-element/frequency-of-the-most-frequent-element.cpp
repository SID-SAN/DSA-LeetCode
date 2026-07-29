class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long max_len=0;
        long long sum=0;
        int j=0;
        int i=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            while((long long)(i-j+1)*nums[i]-sum>k){
                sum-=nums[j];
                j++;
            }
            max_len = max(max_len, (long long)(i - j + 1));
        }
        return max_len;
    }
};
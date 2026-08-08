class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int res=-1;

        int low=1;
        int high=INT_MIN;
        for(int i=0;i<n;i++){
            if(high<nums[i]){
                high=nums[i];
            }
        }

        if(threshold==n) return high;
        while(low<=high){
            long long sum=0;
            int mid=(low+high)/2;
            for(int i=0;i<n;i++){
                sum += (nums[i] + mid - 1) / mid;
            }

            if(sum>threshold){
                low=mid+1;
            }
            else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};
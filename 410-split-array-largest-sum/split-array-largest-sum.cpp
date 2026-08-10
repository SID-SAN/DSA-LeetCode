class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();

        int low=INT_MIN;
        int high=0;
        for(int i=0; i<n; i++){
            high+=nums[i];
            if(low<nums[i]){
                low=nums[i];
            }
        }
        int mid=0;

        while (low<=high){
            mid=(low+high)/2;
            int sum=0;
            int stud=1;

            for(int i=0;i<n;i++){
                if(sum + nums[i]>mid){
                    sum=nums[i];
                    stud++;
                }
                else{
                    sum+=nums[i];
                }
            }

            if(stud>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
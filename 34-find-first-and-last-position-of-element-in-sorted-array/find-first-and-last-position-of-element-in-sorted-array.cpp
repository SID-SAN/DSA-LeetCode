class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v(2,-1);
        int low=0;
        int high=n-1;
        int mid=-1;
        while(low<=high){
            mid=low+((high-low)/2);
            if(nums[mid]>=target){
                if(nums[mid]==target){
                    v[0]=mid;
                }
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        low=0;
        high=n-1;
        mid=-1;
        while(low<=high){
            mid=low+((high-low)/2);
            if(nums[mid]<=target){
                if(nums[mid]==target){
                    v[1]=mid;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return v;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        int mid=(high-low)/2+low;
        while(high>=low){
            int mid=(high-low)/2+low;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return high+1;
    }
};
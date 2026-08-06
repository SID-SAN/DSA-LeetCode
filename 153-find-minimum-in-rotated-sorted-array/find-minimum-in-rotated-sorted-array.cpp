class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(high>low){
            mid=(high-low)/2+low;
            if(mid>0 && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid]<=nums[high]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return nums[low]; 
    }
};
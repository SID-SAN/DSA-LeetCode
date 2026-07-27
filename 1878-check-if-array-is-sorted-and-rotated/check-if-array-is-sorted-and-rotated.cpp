class Solution {
public:
    bool check(vector<int>& nums) {
        int incr = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                incr+=1;
            }
        }
        if(nums[0]>=nums[nums.size()-1]){
            incr+=1;
        }
        if(incr >= (nums.size()-1)){
            return true;
        }
        else{
            return false;
        }
        
    }
};
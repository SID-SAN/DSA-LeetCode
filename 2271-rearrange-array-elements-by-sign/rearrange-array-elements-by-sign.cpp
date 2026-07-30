class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int x=0;
        int y=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[x]=nums[i];
                x+=2;
            }
            else{
                res[y]=nums[i];
                y+=2;
            }
        }
        return res;
    }
};
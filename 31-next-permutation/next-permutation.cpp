class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==0){
            return;
        }
        next_permutation(nums.begin(),nums.end());
        return;
    }
};

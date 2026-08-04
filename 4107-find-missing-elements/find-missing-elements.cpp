class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int first=nums[0];
        int last=nums.back();
        int pos=0;
        for(int i=first;i<=last;i++){
            if(nums[pos]==i){
                pos++;
            }
            else{
                v.push_back(i);
            }
        }
        return v;       
    }
};
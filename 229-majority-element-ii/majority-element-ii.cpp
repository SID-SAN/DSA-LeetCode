class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==0){return {};}
        vector<int> v;
        int thres=n/3;
        int count=1;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i+1<n && nums[i]==nums[i+1]){
                count++;
            }
            else{
                if(count>thres){
                    v.push_back(nums[i]);
                }
                count=1;
            }
        }
        return v;
    }
};
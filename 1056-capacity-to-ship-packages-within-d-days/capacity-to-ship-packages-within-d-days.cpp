class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int res=-1;

        int low=INT_MIN;
        int high=0;
        for(int i=0;i<n;i++){
            high+=weights[i];
            if(low<weights[i]){
                low=weights[i];
            }
        }

        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            int day=1;
            for(int i=0;i<n;i++){
                sum+=weights[i];
                if(sum>mid){
                    day++;
                    sum=weights[i];
                }
            }
            if(day>days){
                low=mid+1;
            }
            else{
                high=mid-1;
                res=mid;
            }
        }
        return res;
    }
};
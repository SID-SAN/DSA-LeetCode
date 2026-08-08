class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n) return -1;
        int ans;
        int res=-1;

        int high=INT_MIN;
        int low=INT_MAX;
        for(int i=0;i<n;i++){
            if(bloomDay[i]>high){
                high=bloomDay[i];
            }
            if(bloomDay[i]<low){
                low=bloomDay[i];
            }
        }

        while(high>=low){
            ans=0;
            int count=0;
            int mid=low+((high-low)/2);
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    count++;
                }
                else{
                    ans+=(count/k);
                    count=0;
                }
            }
            ans+=(count/k);
            if(ans>=m){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};
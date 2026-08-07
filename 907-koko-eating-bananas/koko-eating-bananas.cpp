class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        long long low=1;
        long long high=0;
        long long mid=-1;

        for(int i=0;i<n;i++){
            if(piles[i]>high){
                high=piles[i];
            }
        }
        if(n==h) return high;

        while(low<=high){
            mid=(low+high)/2;
            long long count=0;
            for(int i=0;i<n;i++){
                if(piles[i]%mid!=0){
                    count += ((piles[i]/mid)+1);
                }
                else{
                    count+=(piles[i]/mid);
                }
            }
            if(count>h){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return low;
    }
};
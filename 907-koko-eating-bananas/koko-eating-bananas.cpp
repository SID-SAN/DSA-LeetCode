class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        if(n==h) return piles[n-1];
        long long low=1;
        long long high=piles[n-1];
        long long mid=-1;
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
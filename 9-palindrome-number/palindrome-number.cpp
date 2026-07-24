class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        if(y>=0){
            long long rev = 0;
            while(y>0){
                int last=y%10;
                y=y/10;
                rev=(rev*10)+last;
                } 
                return x == rev;
        }
        else{
            return false;
        }        
    }
};
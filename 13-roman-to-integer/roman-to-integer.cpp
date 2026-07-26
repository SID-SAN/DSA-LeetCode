class Solution {
public:
    int romanToInt(string s) {
        int current = 0;
        int next = 0;
        int sum = 0;
        for(int i=0; i<s.length();i++){
            if(s[i]=='I'){current = 1;}
            if(s[i]=='V'){current = 5;}
            if(s[i]=='X'){current = 10;}
            if(s[i]=='L'){current = 50;}
            if(s[i]=='C'){current = 100;}
            if(s[i]=='D'){current = 500;}
            if(s[i]=='M'){current = 1000;}

            if(i+1<s.length()){
                if(s[i+1]=='V'){next = 5;}
                if(s[i+1]=='I'){next = 1;}
                if(s[i+1]=='X'){next = 10;}
                if(s[i+1]=='L'){next = 50;}
                if(s[i+1]=='C'){next = 100;}
                if(s[i+1]=='D'){next = 500;}
                if(s[i+1]=='M'){next = 1000;}
            }
            if(current<next)
                sum=sum-current;
            else
                sum=sum+current;
        }
        return sum;
    }
};
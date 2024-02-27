class Solution {
public:
    int reverse(int x) {
        int temp=abs(x);
       long ans=0;
        while(temp>0){
            if(ans>INT_MAX/10||ans<INT_MIN/10)return 0;
            int digit=temp%10;
            ans=ans*10+digit;
            temp=temp/10;
        }
        if(x<0){
            ans= ans*(-1);
        }
        return ans;
    }
};
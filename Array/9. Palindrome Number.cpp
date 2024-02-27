class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long ans=0;
        if(x<0){
            return false;
        }
        while(temp>0){
            ans=ans*10+temp%10;
            temp=temp/10;
        }
        if(ans==x){
            return true;
        }
            return false;
        
    }
};
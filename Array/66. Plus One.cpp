class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans*10+digits[i];
        }
        ans=ans+1;
        digits.clear();
        while(ans>0){
            digits.push_back(ans%10);
            ans=ans/10;
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
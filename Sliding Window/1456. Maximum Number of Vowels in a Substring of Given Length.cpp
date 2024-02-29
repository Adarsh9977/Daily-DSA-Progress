class Solution {
public:
bool vowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {
        int start=0,end=0;
        int cnt=0,ans=0;
        map<char, int> mpp;
        while(end<s.size()){
            if(vowel(s[end])==true){
                cnt++;
            }
            if(end-start+1>k){
                
                if(vowel(s[start])==true){
                    cnt--;
                }
                start++;
            }
            ans=max(cnt, ans);
            end++;
        }
        return ans;
    }
};


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            string pal= words[i];
            reverse(pal.begin(), pal.end());
            if(pal==words[i]){
                return words[i];
                break;
            }
        }
        return "";
    }
};
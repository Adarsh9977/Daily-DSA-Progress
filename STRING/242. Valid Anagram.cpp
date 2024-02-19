class Solution {
public:
    bool isAnagram(string s1, string s2) {
       vector<int> count(26,0);
    for(char &ch: s1){
        count[ch-'a']++;
    }
    for(char &ch: s2){
        count[ch-'a']--;
    }

    bool alZeroes= all_of(count.begin(), count.end(), [](int element){
        return element==0;
    });

    return alZeroes;

    }
};
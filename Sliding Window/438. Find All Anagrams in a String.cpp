class Solution {
public:
    bool allZero(vector<int> &counter){
        for(int &i: counter ){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
         vector<int> arr(26, 0);
        
        int m = s.length();
        int n = p.length();
        
        for(char &ch : p)
            arr[ch-'a']++;
        
        int i = 0, j = 0;
        vector<int> result;
        
        while(j < m) {
            arr[s[j] - 'a']--;
            
            if(j-i+1 == n) {
                if(allZero(arr)) {
                    result.push_back(i);
                }
                
                arr[s[i]-'a']++;
                i++;
            }
            j++;
        }
        
        return result;

    }
};
class Solution {
public:
    bool rotateString(string p, string q) {
        int n=p.size();
    int m=q.size();
    if(n!=m)return 0;
    
    string temp = p+p;
    if(temp.find(q)!=string::npos){
        return 1;
    }
    return 0;
    }
};
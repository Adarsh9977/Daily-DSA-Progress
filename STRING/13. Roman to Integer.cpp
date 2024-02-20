class Solution {
public:
        int check(char a){
    int res = 0;
    switch (a)
    {
    case 'I':
    {
        res = 1;
        break;
    }
    case 'V':
    {
        res = 5;
        break;
    }
    case 'X':
    {
        res = 10;
        break;
    }
    case 'L':
    {
        res = 50;
        break;
    }
    case 'C':
    {
        res = 100;
        break;
    }
    case 'D':
    {
        res = 500;
        break;
    }
    case 'M':
    {
        res = 1000;
        break;
    }
    default: break;
    }
    return res;
}

    int romanToInt(string s) {
         int n=s.size();
    int ans=0;

    for(int i=0;i<n;i++){
        //we can also use switch inside the for loop
        if(check(s[i])>=check(s[i+1])){
            ans+=(check(s[i]));
        }
        else{
            ans-=(check(s[i]));
        }
    }
    return ans;
    }
};
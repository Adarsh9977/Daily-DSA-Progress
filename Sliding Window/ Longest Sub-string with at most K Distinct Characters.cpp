#include<bits/stdc++.h>
int getLengthofLongestSubstring(int k, string s)
{
   // Write your code here.
   int n=s.size();
   int ans=INT_MIN;
   int start=0,end=0;
   map<char, int>mpp;
   while(end<n){
      mpp[s[end]]++;
      while(mpp.size()>k){
         mpp[s[start]]--;
         if(mpp[s[start]]==0){
            mpp.erase(s[start]);
         }
         start++;
      }
      ans=max(ans, end-start+1);
      end++;
   }
   return ans;
}

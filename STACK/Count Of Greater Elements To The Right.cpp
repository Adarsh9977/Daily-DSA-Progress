#include<bits/stdc++.h>
vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    // Write your code here.
    int cnt;
     vector<int> ans(query.size(),0);
    for(int i=0;i<query.size();i++){
        cnt=0;
        int index=query[i];
        for(int j=index+1;j<arr.size();j++){
            if(arr[j]>arr[index]){
                ans[i]++;
            }
        }
    }
   
    
    return ans;
}
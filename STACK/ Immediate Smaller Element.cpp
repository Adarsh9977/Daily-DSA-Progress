#include<bits/stdc++.h>
void immediateSmaller(vector<int>& a)
{
	// Write your code here.
	stack<int> st;
	int n =a.size();
	int left=0;
	int right=left+1;
	while(left<n&&right<n){
		if(a[left]>a[right]){
			st.push(a[right]);
		}
		else{
			st.push(-1);
		}
		left++;
		right++;
	}
	st.push(-1);
	for(int i=n-1;i>=0;i--){
		a[i]=st.top();
		st.pop();
	}
}
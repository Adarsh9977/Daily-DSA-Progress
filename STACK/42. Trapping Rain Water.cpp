class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        long long water=0;
        int left=0;
        int right=n-1;
        int leftmax=0;
        int rightmax=0;
        while(left<right){
            if(arr[left]<=arr[right]){
                if(arr[left]>=leftmax){
                    leftmax=arr[left];
                }
                else{
                    water+=leftmax-arr[left];
                }
                left++;
            }
            else{
                if(arr[right]>=rightmax){
                    rightmax=arr[right];
                }
                else{
                    water+=rightmax-arr[right];
                }
                right--;
            }
        }
        return water;
    }
};
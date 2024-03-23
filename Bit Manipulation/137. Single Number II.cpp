//Approach-1 using map;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        map<int,int> mpp;
        for(int i=1;i<nums.size();i++){
           mpp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
        
    }
};


//Approach 2

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]&(1<<i)){
                    cnt++;
                }
            }
            if(cnt%3==1){
                ans=ans|(1<<i);
            }
        }
        return ans;
    }
};

// Approach 3

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i=i+3){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[n-1];
    }
};

// optimal Approach by using bucket method

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int one=0;
        int two=0;
        for(int i=0;i<n;i++){
            one=(one^nums[i])& ~two;
            two=(two^nums[i])&~one;
        }
        return one;
    }
};
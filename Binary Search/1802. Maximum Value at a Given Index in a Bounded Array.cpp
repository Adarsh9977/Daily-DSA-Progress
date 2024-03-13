class Solution {
public:
    long long getsumbyformula(long long count, long long x){
        return (count*x)-(count*(count+1)/2);
    }
    int maxValue(int n, int index, int maxsum) {
        long long left=1;
        long long right=maxsum;
        long long mid;
        int result=0;
        while(left<=right){
            mid=left+(right-left)/2;
            long long leftcount=min((long long)index,mid-1);
            long long leftsum=getsumbyformula(leftcount,mid);
            leftsum+=max((long long )0, index-(mid-1));

            long long rightcount=min((long long)n-index-1,mid-1);
            long long rightsum=getsumbyformula(rightcount,mid);
            rightsum+=max((long long)0, n-index-1-(mid-1));

            long long totalsum=leftsum+rightsum+mid;
            if(totalsum<=maxsum){
                result=max((long long)result,mid);
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return result;
    }
};